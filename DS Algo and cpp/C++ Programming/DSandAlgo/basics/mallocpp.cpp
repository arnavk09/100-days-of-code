#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    //Manually allocating a pointer to heap
    int a=10;
    int *b=&a;
    b=new int [5];
    cout<<&b<<endl; //Address in HEAP
    cout<<*b<<endl;
    return 0;
}