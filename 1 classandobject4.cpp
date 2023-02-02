#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int mark;
    void getdata();
    void displaydata();
};
void student::getdata()
{
    cout<<"Enter the name of the student=";
    cin>>name;
    cout<<"Enter the age of the student=";
    cin>>age;
    cout<<"Enter the mark of the student=";
    cin>>mark;
}
void student::displaydata()
{
    cout<<endl<<endl;
    cout<<"Name="<<name<<endl;
    cout<<"Age="<<age<<endl;
    cout<<"Mark="<<mark<<endl;
}
int main()
{
    student ob;
    ob.getdata();
    ob.displaydata();
}
