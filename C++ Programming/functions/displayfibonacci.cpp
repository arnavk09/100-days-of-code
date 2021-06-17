#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int fibonacci(int count)
{
    if (count == 0)
        return 0;
    if (count == 1)
        return 1;
    return fibonacci(count - 1) + fibonacci(count - 2);
}
int main(int argc, char const *argv[])
{
    int limit;
    cout << "Enter no of terms you wish to display :"<<endl;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        cout << fibonacci(i)<< " ";
    }

    return 0;
}