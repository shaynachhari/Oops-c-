#include<iostream>
using namespace std;

class Binary_check{
    string var;

    public:
        void input();
        void check();
};

void Binary_check::input(){
    cout<<"Please Enter binary number: ";
    cin>>var;
}


void Binary_check::check(){
    for(int i=0; i<var.length(); i++){
        if (var[i] != '0' && var[i] != '1'){
            cout<<"wrong binary number"<<endl;
            break;
        }
    }
}

int main(){
    Binary_check binary;
    binary.input();
    binary.check();
    return 0;
}