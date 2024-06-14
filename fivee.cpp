#include <iostream>
using namespace std;
int main(){
    //to print even numbers before 50 except 50
    for(int i=0; i<=50; i=i+2)
    {
      
        if(i==50){
            continue;
        } cout<<i<<endl;
       
    } 

    return 0;
}
