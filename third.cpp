#include <iostream>
using namespace std;
//global and local variable
/*
int glo=45;
void sum(){
    cout<<glo;
}


int main(){
    int glo= 78;
    cout<<"local variable "<<glo<<endl;
    cout<<"global variable "<<::glo<<endl;


    return 0;
}*/
float amount = 0;
float ticket_price = 405.50;
void price(){
    cout<<"original price "<<ticket_price<<endl;
}
int main(){
    int n =0;
    cout<<"enter the no. of tickets "<<endl;
    cin>>n;
    cout<<n<<"tickets"<<endl;
    amount= n * ticket_price;
    cout<<"please pay"<< amount<<endl;
    if(amount>1000){
        cout<<"wohooo!! discount"<<endl;
        cout<<"please pay "<<0.5*amount;
    } else{
        cout<<"no discount on ";
        cout<<amount;

    }
    return 0;
}