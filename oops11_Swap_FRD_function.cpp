#include<iostream>
using namespace std;
class Y;
class X{
    int a;
    friend void swap(X&, Y&);
    public:
        void setdata(int num){
            a = num;
        }
        void print(){
            cout<<"The value of a is: "<<a<<endl;
        }
};

class Y{
    int b;
    friend void swap(X&, Y&);
    public:
        void setdata(int num){
            b = num;
        }
        void print(){
            cout<<"The value of b is: "<<b<<endl;
        }
};


void swap(X &obj1, Y &obj2){
    int z;
    z = obj1.a;
    obj1.a = obj2.b;
    obj2.b = z;
}

int main(){
    X obj1;
    Y obj2;

    obj1.setdata(6);
    obj2.setdata(9);

    obj1.print();
    obj2.print();
    cout<<endl;
    
    swap(obj1, obj2);
    obj1.print();
    obj2.print();
    return 0;
}