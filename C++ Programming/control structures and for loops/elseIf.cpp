#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter 3 numbers. Use SPACE to indicate new number : ";
    cin>>x>>y>>z;
    if((x>y)&&(x>z)){
        cout<<x<< " is the biggest"<<endl;
    }else if ((y>x)&&(y>z))
    {
        cout<<y<< " is the biggest"<<endl;
    }else if ((z>x)&&(z>y))
    {
        cout<<z<< " is the biggest"<<endl;
    }
    return 0;
}
