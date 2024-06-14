#include <iostream>
using namespace std;
int main(){
    int a=20;
    int*b=&a;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    int**c=&b;
    cout<<"pointer to pointer"<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;


    return 0;
}