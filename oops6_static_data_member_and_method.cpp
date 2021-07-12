#include<iostream>
using namespace std;

// static data member default value is zero if no value is given
// static member Method
// static method can only access static variable 
// static method can call by class reference
class Student{
    int id;

    // static data member
    static int count;
    public:
        void setdata(){
            cout<<"Enter id of student "<<count<<": ";
            cin>>id;
        }
        void getdata(){
            cout<<"The id of student "<<count<<": "<<id<<endl;
            count++;
        }

        // static member Method
        // static void getcount(){
        //     cout<<count<<endl;
        // } 

};

int Student :: count=1;

int main(){
    Student shayna, nitin, shivani;
    shayna.setdata();
    shayna.getdata();
    // Student::getcount();
    
    nitin.setdata();
    nitin.getdata();
    // Student::getcount();

    shivani.setdata();
    shivani.getdata();
    // Student::getcount();
    return 0;
}