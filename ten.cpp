#include <iostream>
using namespace std;
//recusion find factorial
int factorial(int n){
    if(n<1){
        return 1;
    }return n*factorial(n-1);

}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<"is "<<factorial(n)<<endl;


    return 0;
}