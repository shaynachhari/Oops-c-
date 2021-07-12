#include<iostream>
using namespace std;

// friend function not in scope of class
// it can not be called from the object of the class,    sum.sumComplex(num1, num2) == wrong
// usually contains object as argument.
// can be declared inside public or private section of the class .
// it can not access the member by directly their names and need object.member_name
class Complex{
    int a,b;
    public:
        void setNumber(int num1, int num2){
            a = num1;
            b = num2;
        }
        friend Complex sumComplex(Complex obj1, Complex obj2);
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex obj1, Complex obj2){
    Complex result;
    result.setNumber((obj1.a + obj2.a), (obj1.b + obj2.b));
    return result;
}

int main(){
    Complex obj1, obj2, final;
    obj1.setNumber(9, 4);
    obj1.printNumber();

    obj2.setNumber(2, 3);
    obj2.printNumber();

    final = sumComplex(obj1, obj2);
    final.printNumber();
    return 0;
}