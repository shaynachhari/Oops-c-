#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex(int, int); // constructor declaration
};
Complex :: Complex(int x, int y=3){
    a = x;
    b = y;
}

int main(){
    // implicit call 
    Complex o1(3), o2(6, 5);


    // explicit call 
    // Complex o2 = Complex(6, 5);

    o1.printNumber();

    o2.printNumber();
    return 0;
}