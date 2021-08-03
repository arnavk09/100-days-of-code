#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    float x, y, quotient;
    cout << "Enter numerator/dividend : ";
    cin >> x;
    cout << "Enter denominator/divisor : ";
    cin >> y;
    quotient = x / y;
    float remainder = fmod(x, y);
    cout << "Your Numerator/Dividend is " << x << " and your Denominator/Divisor is " << y << " . Your Quotient is " << quotient << " and your remainder is " << remainder;
    return 0;
}
