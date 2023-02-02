#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    string name;
    string lastname;
    int roll;
    int age;
    char section[4];
    char address[20];
    public:
    void getdata();
    void displaydata();
};
 void student::getdata()
{
    cout<<"Enter name=";
    cin>>name;
    cout<<"lastname=";
    cin>>lastname;
    cout<<"Enter roll=";
    cin>>roll;
    cout<<"Enter age=";
    cin>>age;
    cout<<"Enter section=";
    cin>>section;
    cout<<"Enter address=";
    cin>>address;
}
 void student::displaydata()
{
    cout<<"-----------------------"<<endl;
    cout<<"Name of the student is= "<<name<<endl;
    cout<<"lastname= "<<lastname<<endl;
    cout<<"roll number= "<<roll<<endl;
    cout<<"age= "<<age<<endl;
    cout<<"section= "<<section<<endl;
    cout<<"address= "<<address<<endl;
}
int main()
{
    student ob;
    ob.getdata();
    ob.displaydata();
}
