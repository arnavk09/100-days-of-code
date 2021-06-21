#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shop
{

    int itemId[100], itemPrice[100], counter = 1;

public:
    void initCounter(void) { counter = 1; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Item ID :" << counter << endl;
    cin >> itemId[counter];
    cout << "Enter Item Price : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The Price of Item with ID " << itemId[i] << " is " << itemPrice[i] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    Shop thing;
    thing.initCounter();
    thing.setPrice();
    thing.setPrice();
    thing.setPrice();
    thing.displayPrice();

    return 0;
}