#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float ctof(float c)
{
    //FORMULA : f°F=(c°C × 9/5) + 32
    float f = (c * 9 / 5) + 32;
    return f;
}
float ftoc(float fa)
{
    //FORMULA : (f°F − 32) × 5/9 = -/+ c°C
    float ce = (fa - 32) * 5 / 9;
    return ce;
}

int main(int argc, char const *argv[])
{
    int choice;
    cout << "Do you want to convert C to F(PRESS 1) or F to C(PRESS 2)?\n"
         << endl;
    cin >> choice;
    if (choice == 1)
    {
        float x, farenheit, celsius;
        cout << "Enter value in C to convert to F : " << endl;
        cin >> x;
        farenheit = ctof(x);
        cout << farenheit << " F " << endl;
    }
    else if (choice == 2)
    {
        float y, farenheit2, celsius2;
        cout << "Enter value in F to convert to C : " << endl;
        cin >> y;
        celsius2 = ftoc(y);
        cout << celsius2 << " C " << endl;
    }else if (choice>2)
    {
        cout<<"Invalid input. Execution terminated."<<endl;
    }
    

    return 0;
}