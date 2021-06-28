#include <iostream>
#include <iomanip>
#include<stdlib.h>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=3;
    int *b =&a; // Level 1 pointer. I'm pointing to a value
    int **c=&b; // Level 2 pointer. I'm pointing to a pointer that's storing an address value.
    int ***d=&c;// Level 3 pointer. I'm pointing to a pointer that's storing an address value, which in turn is storing an address value, which in turn is storing the value itself.


    /*       a, *b, **c, ***d alll have the same value i.e 3.             */


    /*ADDRESS OPERATOR(&)--> TELLS YOU THE ADDRESS WHERE VALUE IS STORED.*/
    cout<<b<<endl;
    cout<<&a<<endl;
    //DEREFERENCE OPERATOR(*) --> TELLS YOU WHAT IS STORED AT THE ADDRESS.
    cout<<"Value of a as a reference to the pointer is : "<<*b<<endl;
    int sumthird=*b+a;
    cout<<"Pointers in action. I'm adding 3 to *b=a=3 :"<<sumthird<<endl;
    int sumpointer=**c+*b+a;
    int lvlthree=***d+**c+*b+a;
    cout<<"Level 2 pointers in action. Let's add c to b to a : "<<sumpointer<<endl;
    cout<<"Level 3 pointers in action. Lets add d,c,b, and a. : "<<lvlthree<<endl;
    return 0;
}