#include<iostream>
using namespace std;

class Complex;
class Calculator{
    public:
        int add(int x, int y){
            return (x + y);
        }
        int sumreal(Complex o1, Complex o2);
};

class Complex{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend int Calculator :: sumreal(Complex o1, Complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumreal(Complex o1, Complex o2){
    return (o1.a + o2.a);
}
    
int main(){
    Complex num1, num2;
    num1.setNumber(3, 5);
    num1.printNumber();
    num2.setNumber(8, 6);
    num2.printNumber();

    Calculator cal;
    int result = cal.sumreal(num1, num2);
    cout<<"The sum of the real numbers is "<<result<<endl;

    return 0;
    }

    // 2nd questions 

  /*  #include<iostream>
using namespace std;

class Y;
class X{
    int a;
    friend int add(X, Y);
    public:
        void setdata(int value){
            a = value;
        }
};

class Y{
    int a;
    friend int add(X, Y);
    public:
        void setdata(int value){
            a = value;
        }
};

int add(X obj1, Y obj2){
    return (obj1.a + obj2.a);
}

int main(){
    X x;
    Y y;
    x.setdata(6);
    y.setdata(9);
    cout<<add(x, y)<<endl;
    return 0;
}
*/