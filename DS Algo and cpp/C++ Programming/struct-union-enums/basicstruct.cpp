#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct employee
{
    int eID;
    char favChar;
    float salary;
};


int main(int argc, char const *argv[])
{
    struct employee harry,shubham,rohanDas;
    harry.eID=1;
    harry.favChar='c';
    harry.salary=120000;
    shubham.eID=2;
    shubham.favChar='d';
    shubham.salary=1200000000;
    cout<<harry.eID<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    cout<<shubham.eID<<endl;
    cout<<shubham.favChar<<endl;
    cout<<shubham.salary<<endl;
    return 0;
}