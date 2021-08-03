#include <iostream>
using namespace std;
int global =999;
int main(int argc, char const *argv[])
{
    float dif1,dif2,diff;
    cout<<"Enter Num1 : ";
    cin>>dif1;
    cout<<"Enter Num2 : ";
    cin>>dif2;
    diff=dif1-dif2;
    cout<<"You entered the numbers "<<dif1<<" and "<<dif2<< " , and their difference is  "<<diff;
    return 0;
}