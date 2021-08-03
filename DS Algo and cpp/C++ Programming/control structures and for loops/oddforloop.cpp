#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int choice;
    cout << "Enter choice of loop. \n Press 1 for FOR loop \n OR \n press 2 for WHILE loop \n OR \n press 3 for DO-WHILE loop.";
    cin >> choice;
    if (choice == 1)
    {

        //FOR LOOP
        cout << "You chose FOR loop." << endl;
        int x = 1, number;
        cout << "\n Enter max value for odd numbers. ";
        cin >> number;

        for (x = 1; x <= number; x+=2)
        {
            cout << setw(2) << x << endl;
        }
    }
    else if (choice == 2)
    {
        //WHILE LOOP
        cout << "You chose WHILE loop.\n"
             << endl;
        int number2, i = 1;
        cout << "\n Enter max value for odd numbers. ";
        cin >> number2;

        while (i <= number2)
        {
            cout << setw(2) << i << "\n";
            i += 2;
        }
    }
    else if (choice == 3)
    {
        cout << "You chose DO-WHILE loop.\n"
             << endl;
        int number3, j = 1;
        cout << "\n Enter max value for odd numbers. ";
        cin >> number3;

        do
        {
            cout << j << endl;
            j = j + 2;

        } while (j <= number3);
    }

    return 0;
}
