
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
      void setdata(int v1 , int v2 ){
          a = v1;
          b = v2;

     }

     void printNumber(){
         cout<<"The numbers is "<<a<<"+"<<b<<"i "<<endl;
     }
     void complexSum(Complex obj , Complex obj2){
         a = obj.a + obj2.a;
         b = obj.b + obj2.b;    
         // 3+9i=obj
         // 6+3i=obj2
         // 9+2i=result



     }
};

int main(){
    Complex num1 , num2 , result;

    num1.setdata(3,9);
    num1.printNumber();

    num2.setdata(6,3);
    num2.printNumber();

    result.complexSum(num1 , num2);
    result.printNumber();


    return 0;
}
    

