#include <iostream>
using namespace std;
//WAP TO DISPLAY 2ND LARGEST NUMBER IN ARRAY
int main()
{
    int i, n;
    float arr[1000];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i-1])
           arr[0] = arr[i-1];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}