#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout << "Age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You're an ADULT.";
    }
    else
    {
        cout << "You're a MINOR";
    }
    return 0;
}