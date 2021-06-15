#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /*IMPORTANT : 
    (1)You don't use & (as in int *b=&a;) to link a pointer to a memory location. You simply use int *int_name = array_name; to link them. 

    (2)As per pointer arithmetic, new address = current address + {i(increment value) * (size of datatype)}
    eg : if current address=32, type=int, increment value =1, new address = 32+(1*4)=36
    */

    //DEMO1 (BASIC):

    // int marks[] = {22, 44, 66, 88, 110};
    // int *p = marks;
    // cout << "Marks[0] is : " << *p << endl;
    // cout << "Marks[1] is : " << *(p + 1) << endl;
    // cout << "Marks[2] is : " << *(p + 2) << endl;
    // cout << "Marks[3] is : " << *(p + 3) << endl;
    // cout << "Marks[4] is : " << *(p + 4) << endl;

    int marks2[] = {1, 3, 5, 7, 9};
    int *q = marks2;   
    cout<<*q<<endl;         //prints value of *q i.e 1
    cout << *(q++)<<endl;
    cout<<*q<<endl;    
    cout<<*(++q)<<endl;
    cout<<*q<<endl;     
    return 0;
}