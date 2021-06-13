#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    a=12,b=123,c=1234;
    cout<<"a without setw is "<<a<<endl;
    cout<<"b without setw is "<<b<<endl;
    cout<<"c without setw is "<<c<<endl;
    cout<<"A with setw is "<<setw(4)<<a<<endl;
    cout<<"B with setw is "<<setw(4)<<b<<endl;
    cout<<"C with setw is "<<setw(4)<<c<<endl;
    return 0;
}
