#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

     //Defining and displaying an array :
    int marks[] = {23, 34, 45, 56};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //Changing array values :
    int marks2  [] = {1,2,3,4};
    cout<<"BEFORE CHANGE : "<<endl;
    cout<<marks2[0]<<endl;
    cout<<marks2[1]<<endl;
    cout<<marks2[2]<<endl;
    cout<<marks2[3]<<endl;

    marks2[0]=999;
    marks2[2]=888;
    cout<<"Changed Marks : "<<endl;
    //GENERIC RENDER -->
    // cout<<marks2[0]<<endl;
    // cout<<marks2[1]<<endl;
    // cout<<marks2[2]<<endl;
    // cout<<marks2[3]<<endl;

    //Using FOR LOOP to render an array -->
    for (int i = 0; i < 4; i++)
    {
        cout<<marks2[i]<<endl;
    }
    return 0;
}