#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
    Complex operator+(Complex c) //Overloaded Operator
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main(int argc, char const *argv[])
{
    Complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}