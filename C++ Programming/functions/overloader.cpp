#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//We are calculating volumes of 3D figures in the following program.

float volume(float x){
    //CUBE
   return x*x*x;
}
float volume(float r, float h){
    //CYLINDER
    return (3.14)*(r)*(r)*(h);
}



int main(int argc, char const *argv[])
{
    int choice;
    cout<<"PRESS 1 TO CALCULATE CUBE VOLUME OR PRESS 2 TO CALCULATE CYLINDER VOLUME : "<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"CALCULATING VOLUME OF CUBE"<<endl;
        int side;
        cout<<"Enter SIDE of cube :"<<endl;
        cin>>side;
        cout<<"volume of cube is : "<<volume(side)<<endl;
    }
    else if (choice==2)
    {
        cout<<"CALCULATING VOLUME OF CYLINDER"<<endl;
        int h,r;
        cout<<"enter HEIGHT"<<endl;;
        cin>>h;
        cout<<"enter RADIUS"<<endl;;
        cin>>r;
        cout<<"volume of CYLINDER is : "<<volume(r,h)<<endl;
    }
    
    
    
    return 0;
}