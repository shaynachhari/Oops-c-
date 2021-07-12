#include<iostream>
using namespace std;

// class is a templates or blueprint for objects
// objects are instance of class

// Here by default attribute and methods are private
// if we want to make public Attributes we have to use public access specifier
class Fruits{
    private:
        int price = 100;
    public:
        string colour;
        string name;
        string taste;
        void detail(){
            cout<<name<<" has "<<colour<<" colour and price is: "<<price<<endl;
        }
};

int main(){
    Fruits mango;
    mango.colour = "Yellow";
    mango.name = "Mango";
    mango.taste = "Sweat and Sour";
    // this will give error because it is private attribute
    // mango.price = 100;
    cout<<mango.colour<<endl;
    cout<<mango.name<<endl;
    cout<<mango.taste<<endl;
    // cout<<mango.price<<endl;
    mango.detail();
    return 0;
}
//*********************************************************************************************************************************
#include<iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;

    public: 
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    } 
};
    
void Employee :: setdata(  int a1 ,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
    

int main(){
    Employee shayna;
    shayna.d = 24;
    shayna.e = 11;
    shayna.setdata(5,55,555);
    shayna.getdata();

    return 0;
}