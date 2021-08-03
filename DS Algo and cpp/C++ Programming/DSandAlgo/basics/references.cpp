#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int &r = a;
    cout << "Initially declared a : " << a << endl;
    r++; //"r" is mapped to the same address as "a" and thus incrementing r is the same as incrementing a.
    cout << r << endl;
    cout << "WE get the same value with a i.e :" << a << endl;
    return 0;
}