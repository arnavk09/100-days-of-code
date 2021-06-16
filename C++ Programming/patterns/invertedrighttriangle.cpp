#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout << "Rows : " << endl;
    cin >> x;
    for (int i = x; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    //ALTERNATIVE APPROACH AS NUMBERED PYRAMID

    int y;
    cout << "Rows Alternative : ";
    cin >> y;
    for (int k = y; k >= 0; k--)
    {
        for (int l = 0; l < k; l++) //LOGIC IS SIMILAR TO EARLIER LOOP, INSTEAD OF DECREMENTING WE ARE INCREMENTING J FROM 1 TO y
        {
            cout << "       *";
        }
        cout << endl;
    }

    return 0;
}