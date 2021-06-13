#include <iostream>
#include<iomanip>
using namespace std;
int a=450;
int main(int argc, char const *argv[])
{
    /*We use the sizeof()function here to see the sizes of the different data types*/
   /* float d = 34.4f;
    long double e = 34.4L;
    cout << "The Size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The Size of 34.4 is " << sizeof(34.4f) << endl;
    cout << "The Size of 34.4 is " << sizeof(34.4F) << endl;
    cout << "The Size of 34.4 is " << sizeof(34.4l) << endl;
    cout << "The Size of 34.4 is " << sizeof(34.4L) << endl;
    return 0;*/
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    /*Typecasting*/
    int a=45;
    float b=45.868686;
    cout<<"val of a is "<<a<<" and value of original b is "<<b<<endl;
    cout<<"val of b typecasted to int is "<<(int)b<<endl;
    cout<<"Value of global int is "<<::a<<endl;
}
