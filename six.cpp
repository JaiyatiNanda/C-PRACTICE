#include <iostream>
using namespace std;
int main(){
    // to print increment of salary of four employees
    int i=1100;
    do{
        i=i+1000;
        if(i==4100){
            continue;
        }
        if(i==7100){
            break;
        }
        cout<<"increment"<<i<<endl;
    }while(i<8100);
    return 0;
   


}