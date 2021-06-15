#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int elements;
    cout << "Enter maximum array elements : \n" << endl;
    cin >> elements;
    int arraymain[elements];
    cout << "Enter Elements for Array : " << endl;

    for (int i = 0; i < elements; i++)
    {
        cin >> arraymain[i];
        
    }

    cout << "Array is : \n" << endl;

    for (int n = 0; n < elements; ++n)
    {
        cout <<setw(2)<< arraymain[n] << "  " << endl;
        
    }

    return 0;
}