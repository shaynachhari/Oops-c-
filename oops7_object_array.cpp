#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setdata(){
            salary = 10000;
            cout<<"Enter id of Employee: ";
            cin>>id;
        }
        void getdata(){
            cout<<"The salary of employee with id: "<<id<<" is "<<salary<<endl;
        }
};

int main(){
    Employee dell[3];
    dell[0].setdata();
    dell[0].getdata();

    dell[1].setdata();
    dell[1].getdata();

    dell[2].setdata();
    dell[2].getdata();

    /*
    Emplooye dell, tell, mell, sell, nell;
    dell.setdata();
    dell.getdata();

    tell.setdata();
    tell.getdata();

    mell.setdata();
    mell.getdata();

    sell.setdata();
    sell.getdata();

    nell.setdata();
    nell.getdata(); */
    return 0;
}