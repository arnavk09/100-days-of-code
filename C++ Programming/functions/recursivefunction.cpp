#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
       return 1;
    }
    
    return n*factorial(n-1);
    
}

int main(int argc, char const *argv[])
{
    int x;
    cout<<"What factorial do you want ?"<<endl;
    cin>>x;
    int ans=factorial(x);
    cout<<x<<" ! = "<<ans<<endl;
    return 0;
}