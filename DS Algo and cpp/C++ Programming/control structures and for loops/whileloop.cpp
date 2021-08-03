#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 0;
    while (x <= 40)
    {
        cout <<setw(2)<< x << endl;
        x++;
    }
    return 0;
}
