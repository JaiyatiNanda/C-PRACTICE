#include <iostream>
using namespace std;
int main(){
    int marks[]={80,40,87,90,88};
    cout<<marks[3]<<endl;
    for(int i=0;i<4;i++){
        cout<<marks[i]<<endl;
    }
    marks[3]=77;
    cout<<marks[3]<<endl;
    //pointers and arrays
    int*p=marks;
    cout<<"marks[0] "<<*p<<endl;
    cout<<"marks[1] "<<*(p+1)<<endl;
    cout<<"marks[2] "<<*(p+2)<<endl;
    cout<<"marks[3] "<<*(p+3)<<endl;
    cout<<"marks[4] "<<*(p+4)<<endl;
    
    
    return 0;


}