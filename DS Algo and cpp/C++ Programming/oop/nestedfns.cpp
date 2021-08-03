#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void complementer(void);
    void printer(void);
};
void binary::read(void)
{
    cout << "Enter Binary Number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "NOT BINARY FORMAT";
            exit(0);
        }
        else
        {
            cout << "BINARY FORMAT";
            exit(0);
        }
    }
}
void binary::complementer()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::printer(void){
    cout<<"Binary Number You Entered : "<<s<<endl;
}
int main(int argc, char const *argv[])
{
    binary b;
    b.read();
    b.printer();
    b.chk_bin();
    b.complementer();
    b.printer();


    return 0;
}