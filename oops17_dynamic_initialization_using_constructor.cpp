#include<iostream>
using namespace std;

class Interest{
    int principle, years;
    float interestRate, returnValue;
    public:
        Interest(int p, int y, int r);
        Interest(int p, int y, float r);
        void printInterest(){
            cout<<"The principle is "<<principle<<" for year "<<years
                <<" at the rate "<<interestRate<<" return amount: "
                <<returnValue<<endl;
        }
};

Interest ::Interest(int p, int y, int r){
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);

        // returnValue = principle + (interestRate * principle);
    }
}
Interest ::Interest(int p, int y, float r){
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = principle * (1+interestRate);
        // returnValue = principle + (interestRate * principle);
    }
}

int main(){
    int p, y;
    float r;
    int R;
    cout<<"Enter principle, year and rate:";
    cin>>p>>y>>R;
    Interest i1(p, y, R);
    i1.printInterest();

    cout<<"Enter principle, year and rate:";
    cin>>p>>y>>r;
    Interest i2(p, y, r);
    i2.printInterest();

    return 0;
}