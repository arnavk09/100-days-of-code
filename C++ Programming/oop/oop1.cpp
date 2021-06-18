#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Employee{
private : int a,b,c;

public :int d,e;
void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"A is : "<<a<<endl;
        cout<<"B is : "<<b<<endl;
        cout<<"C is : "<<c<<endl;
        cout<<"D is : "<<d<<endl;
        cout<<"E is : "<<e<<endl;
    };
    
};
void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(int argc, char const *argv[])
{
    Employee aiden;
    //Calling .a, .b, .c will throw an error as it's a private int.
    // aiden.a=99;
    aiden.d=22;
    aiden.e=44;
    aiden.setData(1,2,4);
    aiden.getData();

    
    return 0;
}