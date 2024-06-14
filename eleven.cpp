#include <iostream>
using namespace std;

//fibonacci series  0 1 1 2 3 5 8

int fibonacci(int n){
    if(n<=2){
        return 1;
    } 
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int n;
    cout<<"enter the position fibonacci of series"<<endl;
    cin>>n;
    cout<<"the number is "<<fibonacci(n);
    //pending series


    return 0;
}