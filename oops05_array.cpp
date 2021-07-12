#include<iostream>
using namespace std;

class Shop{
    int itemID[50];
    int itemprice[50];
    int counter = 0;
    public:
        void setprice(void);
        void displayitem();
        void displayId();
};
void Shop :: setprice(){
    cout<<"Enter Id of your "<<counter+1<<" item: ";
    cin>>itemID[counter];
    cout<<"Enter Price of your item with Id "<<itemID[counter]<<": ";
    cin>>itemprice[counter];
    counter ++;
}


void Shop:: displayitem(){
    for(int i = 0; i < counter; i++){
        cout<<"The Price of item with Id "<<itemID[i]<<" is "<<itemprice[i]<<endl;
    }
}

void Shop :: displayId(){
    for(int i=0; i<counter; i++){
        cout<<itemID[i]<<", ";
    }
}
int main(){
    Shop amazon;
    amazon.setprice();
    amazon.setprice();
    amazon.setprice();
    amazon.displayitem();
    amazon.displayId();
    return 0;
}

/*

class Shop{
    int itemId[50];
    int itemPrice[50];
    int counter;

    public:
    void counter_rate() {counter =0;}
    void setId();
    void displayprice();
    

};
void Shop :: setId(){
    cout << "Enter Id of your Item no."<< counter+1  <<endl;
    cin >> itemId[counter];
    cout << "Enter Price of your Item . " <<endl;
    cin >> itemPrice[counter];
    counter ++;
}

void Shop :: displayprice(){

    for ( int i=0; i < counter; i++){

    cout <<"\nThe Price of item with Id " << itemId[i] << " is : " << itemPrice[i] << endl;

    }
}
int main(){
    Shop filipcard;
    filipcard.counter_rate();
    filipcard.setId();
    filipcard.setId();
    filipcard.setId();
    filipcard.displayprice();
    
    */