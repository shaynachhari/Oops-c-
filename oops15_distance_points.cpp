#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int a, b;

    public:
    
    void print_Points(){
        cout<<"The Points is : ("<<a<<","<<b<<") "<<endl;
        
    }
    Point(int  x, int y){;

        a = x;
        b = y;
    }

    friend void distance(Point obj1 , Point obj2);

};
void distance(Point obj1 , Point obj2){
    // distance = underroot ((x2-x1)**2  + (y2-y1)**2)

    float result;
    result = sqrt(pow((obj2.a - obj1.a) ,2) +  pow((obj2.b - obj1.b),2));
    cout<<"The Distance between points is "<<result<<endl;
}

int main(){

    Point p1(1,3) , p2(7,5);

    p1.print_Points();
    p2.print_Points();

    distance(p1, p2);

    p1.print_Points();
    p2.print_Points();

    return 0;
}
