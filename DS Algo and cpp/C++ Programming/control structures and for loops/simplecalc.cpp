#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Only 2 numbers can be given as an input. You can only perform 1 operation per execution. \n Don't give 3 numbers. Perform all operations separately. \n";
    float x, y;
    int z;
    cout << "Enter No1 : ";
    cin >> x;
    cout << "Enter No2 : ";
    cin >> y;
    cout << "Enter 1 to ADD, 2 to SUBTRACT, 3 to MULTIPLY and 4 to DIVIDE.";
    cin >> z;
    if (z == 1)
    {
        float sum = x + y;
        cout << " You ADDED " << x << " and " << y << " The SUM is " << sum << endl;
    }
    else if (z == 2)
    {
        float dif = x - y;
        cout << " You SUBTRACTED " << x << " and " << y << " The DIFFERENCE is " << dif << endl;
    }
    else if (z == 3)
    {
        float mult = x * y;
        cout << " You MULTIPLIED " << x << " and " << y << " The PRODUCT is " << mult << endl;
    }
    else if (z == 4)
    {
        float quotient = x / y;
        float remainder = fmod(x, y);
        cout << " You DIVIDED " << x << " by " << y << " The QUOTIENT is " << quotient << " and the REMAINDER is " << remainder << endl;
    }
    return 0;
}
