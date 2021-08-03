#include <iostream>
using namespace std;
class DateClass
{
public:
    int m_year{};
    int m_month{};
    int m_day{};

    void print()
    {
        cout << m_year << '/' << m_month << '/' << m_day;
    }
};

int main()
{
    int day;
    cin >> day;
    int month;
    cin >> month;
    int year;
    cin >> year;

    DateClass today{year, month, day};

    //today.m_day = 16;
    today.print();

    return 0;
}