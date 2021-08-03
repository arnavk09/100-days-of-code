//Basic addition function.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int adder(int x, int y){
int sum=x+y;
return sum;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    int z = adder(a,b);
    cout<<z;
    return 0;
}