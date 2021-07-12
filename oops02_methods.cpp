#include<iostream>
using namespace std;

class Student{
    private:
        string name = "NA";
        string rollno = "NA";
        int marks = 0;
    public:
        void student_detail();
        void set_data(string student_name, string student_roll, int student_marks);

};

void Student :: student_detail(){
    cout<<"Student name and rollno. is "<<name<<" "<<rollno<<" has marks "<<marks<<endl;
}

void Student :: set_data(string student_name, string student_roll, int student_marks){
    name = student_name;
    rollno = student_roll;
    marks = student_marks;
}

int main(){
    Student shayna;
    // shayna.name = "Shayna Chhari";
    // shayna.rollno = "71";
    // shayna.marks = 92;
    shayna.set_data("Shayna chhari", "71", 92);
    shayna.student_detail();
    return 0;
}