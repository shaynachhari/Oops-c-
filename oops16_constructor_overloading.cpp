#include<iostream>
using namespace std;

// constructor overloading means more than one constructor with different parameters 
/*
note:-
    1:- Function overloading means more than one function with same name but diffent parameter
    2:- Operator overloading means one operator can be used for multiple functionality
    3:- overloading is concept of polymorphism
*/

class Complex{
    int a,b;
    public:
        Complex(){
            a = 0;
            b = 0;
        }
        Complex(int x, int y){
            a = x;
            b = y;
        }
        Complex(int x){
            a = x;
            b = 0;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
int main(){
    Complex num1;
    num1.printNumber();

    Complex num2(5, 9);
    num2.printNumber();

    Complex num3(5);
    num3.printNumber();
    return 0;
}