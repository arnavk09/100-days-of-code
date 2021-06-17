#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter num :" << endl;
    cin >> a;
    cout << " Term in fibonacci series at position " << a << " is " << fib(a) << endl;
    return 0;
}