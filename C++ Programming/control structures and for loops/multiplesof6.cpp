#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,inp;
    cout<<"\n Till where do you want multiples of 6? \n ";
    cin>>inp;
    if(inp<6){
            cout<<"INVALID. PROGRAM TERMINATED.";
        }
        for ( i = 0; i <= inp; i=i+6)
        {
            cout<<i<<endl;
        }
        //I'VE ALSO DEVISED ANOTHER METHOD USING IF STATEMENT. BOTH GIVE THE SAME ANSWER.
    // for ( i = 1; i <=inp; i++ )
    // {

    //     // if ((i%2==0)&&(i%3==0))
    //     // {
    //     //     cout<<i<<endl;  
    //     // }
        
     
    // }
    

    return 0;
}
