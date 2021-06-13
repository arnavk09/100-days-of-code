#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter a number between 1-7 :" << endl;
    cin >> x;
    if ((x > 0) && (x <= 7))
    {
        switch (x)
        {
        case 1:
            x == 1;
            cout << "Sunday";
            break;
        case 2:
            x == 2;
            cout << "Monday";
            break;
        case 3:
            x == 3;
            cout << "Tuesday";
            break;
        case 4:
            x == 4;
            cout << "Wednesday";
            break;
        case 5:
            x == 5;
            cout << "Thursday";
            break;
        case 6:
            x == 6;
            cout << "Friday";
            break;
        case 7:
            x == 7;
            cout << "Saturday";
            break;
        }
    }
    else
    {
        cout << "INVALID NUMBER INPUT DETECTED. APPLICATION TERMINATED.";
    }
    return 0;
}
