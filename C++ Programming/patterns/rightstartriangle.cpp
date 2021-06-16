/*EXPECTED OUTPUT : if number of rows = 5,
    $
    $$
    $$$
    $$$$
    $$$$$

 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, z;
    cout << "Enter no of rows :\n";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " $ ";
        }
        cout << endl;
    }

    return 0;
}