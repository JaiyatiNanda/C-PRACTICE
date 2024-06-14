#include <iostream>
using namespace std;
// overloading
int volume(int l, int b ,int h){
    return l*b*h;
}

float volume(float r , int h){
    return 3.14 *r*r *h;

}
int volume(int a){
    return a*a*a;
}


int main(){
    cout<<"volume of cube "<<volume(4)<<endl;
    cout<<"volume of cuboid "<<volume(4,6,7)<<endl;
    cout<<"volume of cylinder "<<volume(4.8,8)<<endl;
   
    return 0;
}