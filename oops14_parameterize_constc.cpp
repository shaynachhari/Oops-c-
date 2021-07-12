#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        void printPoints(){
            cout<<"The points are ("<<x<<", "<<y<<")"<<endl;
        }
        Point(int a, int b){
            x = a;
            y = b;
        }
};

int main(){
    Point p1(2, 3), p2(1, 6);

    p1.printPoints();
    p2.printPoints();
    return 0;
}