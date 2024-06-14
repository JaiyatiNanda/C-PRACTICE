#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void getvar(int a1, int b1,int c1);
    void setvar()
    {
        cout << "the calue of a " << a << endl;
        cout << "the calue of b " << b << endl;
        cout << "the calue of c " << c << endl;
        cout << "the calue of d " << d << endl;
        cout << "the calue of e " << e << endl;
    }
};
void employee :: getvar(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry;
    harry.d =3;
    harry.e =4;
    harry.getvar(1,2,5);
    harry.setvar();
    return 0;
}
