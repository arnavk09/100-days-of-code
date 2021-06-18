#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int index;
    float sum=0;
    float avg;
    cin>>index;
    int arr[index];
    //Insert Into ARRAY :
    for(int i=0;i<index;i++){
        cin>>arr[i];
        
    }
    //Render ARRAY :
    for(int j=0;j<index;j++){
        cout<<"{"<<arr[j] << " "<<"}";
        sum+=arr[j];
    }
avg=(sum)/(index);
   
cout<<" \nSUM IS : "<<sum<<endl;
cout<<"AVG IS : "<<avg<<endl;

    return 0;
}