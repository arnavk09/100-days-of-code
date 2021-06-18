#include<iostream>
#include<string>

using namespace std;

class Student{
    private:
        int roll;
    public:
        string name;
        int Class;
        void setData(int rno);
        void getData(){

            cout<<"The name of the student is "<<name<<endl;
            cout<<"The class of the student is "<<Class<<endl;
            cout<<"The roll no. of the student is "<<roll<<endl;
        }
};
void Student :: setData(int rno){
    roll = rno;
}
int main(){
    int klass , rollNo;
    string name;
    cout<<"Enter NAME : "<<endl;
    cin>>name;
    cout<<"Enter Class : "<<endl;
    cin>>klass;
    cout<<"Enter rollNo : "<<endl;
    cin>>rollNo;
    Student x;
    x.name = name;
    x.Class = klass;
    x.setData(rollNo);
    x.getData();

    return 0;
}