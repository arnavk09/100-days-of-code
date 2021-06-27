#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int index;
    cout<<"INDEX : "<<endl;
    cin>>index;
    int arr[index];
    
    for(int i=0;i<index;i++){
        cin>>arr[i];
    }
    for(int j=0;j<index;j++){

        cout<<arr[j]<<" ";
    }

    return 0;
}