#include <iostream>
using namespace std;

int main(){
    // datatypes 
    int a = 4;
    float b = 4.56;
    double c= 4.675;
    char d ='i';
    cout<<"value of a "<< a <<" size of variable "<< sizeof(a)<<endl;
    cout<<"value of b "<< b <<" size of variable "<< sizeof(b)<<endl;
    cout<<"value of c "<< c <<" size of variable "<< sizeof(c)<<endl;
    cout<<"value of d "<< d <<" size of variable "<< sizeof(d)<<endl;
    cout<<"sum of a and b "<<a+int(b)<<endl;
    cout<<"sum of b amd c "<<(double)b+c<<endl;


    return 0;


}