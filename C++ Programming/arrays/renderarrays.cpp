#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int render[] = {5, 10, 15, 20, 25};
    int choice;
    cout << "Enter 1 to RENDER ARRAY using WHILE \n OR \n Enter 2 to RENDER ARRAY using DO-WHILE."<<endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "You chose WHILE loop. \n";
        int i = 0;
        while (i <= 4)
        {
            cout << render[i] << endl;
            i++;
        }
    }
    else if (choice == 2)
    {
        cout << "You chose DO WHILE loop. \n";
        int j = 0;
        do
        {
            cout << render[j] << endl;
            j++;
        } while (j <= 4);
    }
    return 0;
}