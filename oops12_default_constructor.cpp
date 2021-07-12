#include<iostream>
using namespace std;

// constructor is special member function with the same name as of the class 
// it is used to initilize the object of its class 
// it is automatically invoked(call) whenever an object is created 

class Complex{
    int a,b;
    public:
        // void setdata(int x, int y){
        //     a = x;
        //     b = y;
        // }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex(); // constructor declaration
};
Complex :: Complex(){
    a = 3;
    b = 6;
}

int main(){
    Complex o1,o2;
    
    o1.printNumber();

    o2.printNumber();
    return 0;
}
/* properties of constructor
1. It should be declared in the public of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments.(only for default constructor)
5. We cannot refer to their address.
*/