#include <iostream>
using namespace std;
// call of refernce of pointer and reference variable
int sum(int a ,int b){
int c =a+ b;
return c;
}

void swap(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b= temp;
}
void swapRefrence(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

int main(){
    int x =5 , y=6;
    cout<<" first number "<<x<<endl;
    
    cout<<" second number"<<y<<endl;
   // swap(&x,&y);
   // cout<<"sum of two numbers"<<sum(x, y);
   swapRefrence(x ,y);
   cout<<"on swapping"<<endl;
   cout<<" first number "<<x<<endl;
   cout<<" second number "<<y<<endl;



    return 0;
}