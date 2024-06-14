#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"enter any number";
    cin>>n;
    int i;
    cout<<"table of your number";
 /*   do{
        cout<<n<<" * "<<i <<"= "<< n*i<<endl;
        i++;
    }while(i<=10);
   */
  for(int i=0; i<=10 ;i++)
  {
    cout<<n<<" * "<< i <<"= "<< n*i<<endl;
  }

    return 0;
}