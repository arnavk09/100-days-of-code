#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    cout << "enter the num till which you wiish to count down " << endl;
    cin >> count;
    for (int i = 100; i >= count; i=i-2)
    {
        cout << i << endl;
    }
    return 0;
}