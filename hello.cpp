#include<iostream>
using namespace std;

int main(){
    int i;
   // for (i=5; i<=50; i+=5)
   // cout<<i<<endl;

    //for (i=1; i <= 10; i++)
    //cout<<i*5<<endl;

    for (i=1; i<=50; i++){
        if (i%5 == 0)
        cout<<i<<endl;
        
    }
   
  // revers print
    for (i=50; i>=1; i--){
        if (i%5 == 0)
        cout<<i<<endl;
        
    }

    return 0;
}
