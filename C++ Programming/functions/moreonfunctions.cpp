#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

inline int product(int a, int b){
    int c=a*b;
    return c;
}
//In simpler words, inline functions execute the function as if it were written normally in main()
float moneyRecieved(int currentMoney, float factor=1.04){
return currentMoney*factor;
}
inline int min(int x, int y)
{
    return x > y ? y : x;
}


int main(int argc, char const *argv[])
{
//  cout<<"Enter money :"<<endl;
//  int money;
//  cin>>money;
// cout<<"If you have "<<money<<" INR in your a/c, you will receive "<<moneyRecieved(money)<<" INR after a year"<<endl;
// cout<<"(VIP only)If you have "<<money<<" INR in your a/c, you will receive "<<moneyRecieved(money,1.10)<<" INR after a year"<<endl;

cout << min(5, 6) << '\n';
cout << min(3, 2) << '\n';
    
    return 0;
}