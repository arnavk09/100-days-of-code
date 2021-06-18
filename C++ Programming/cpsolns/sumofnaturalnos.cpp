#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum=0, limit;
    cout<<"Enter Limit : "<<endl;
    cin>>limit;
    for (int i = 1; i <= limit; i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"\nSUM :"<<sum<<endl;
    
    return 0;
}