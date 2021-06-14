//MULTIPLES OF 6 USING WHILE AND DO WHILE LOOPS.
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int choice;
    cout<<"\n Press 1 to use WHILE loop \n OR \n 2 to use DO-WHILE loop"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"\n You selected WHILE loop.\n";
        int i=0,count;
    cout<<"\n Enter max limit till which you need multiple of 6 :";
    cin>>count;
    while(i<=count){
        cout<<i<<endl;
        i+=6;

    }
    }else if (choice==2)
    {
        cout<<"\n You selected DO-WHILE loop.\n";
        int j=0,count2;
    cout<<"\n Enter max limit till which you need multiple of 6 :";
    cin>>count2;
    do
    {
        cout<<j<<endl;
        j+=6;
    } while (j<=count2);    
    }
    
    return 0;
}
