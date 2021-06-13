#include <iostream>
using namespace std;
int sum=990;
int main(int argc, char const *argv[])
{
    int sum,x,y;
    cout<<"Enter no1 :"<<endl;
    cin>>x;
    cout<<"Enter no2 :"<<endl;
    cin>>y;
    sum=x+y;
    cout<<"Sum : "<<sum<<endl;
    /*We Will now output the global variable by writing :: i.e scope localization.*/
    cout<<"Global is :"<<::sum;
    return 0;
}
