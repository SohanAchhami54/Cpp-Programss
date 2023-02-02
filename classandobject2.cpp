#include<iostream>
using namespace std;
class student
{
    //member variable
    string name;
    char address[20];
    int section;
    int roll;
    float percent;
    float math,social,computer,english,commerce;
    public:
    //member function
    void getdata();
    void displaydata();
    float percentage();
};
void student:: getdata()//scope resolution operator
{
    cout<<"enter name=";
    cin>>name;
    cout<<"enter address=";
    cin>>address;
    cout<<"enter section=";
    cin>>section;
    cout<<"enter the mark of math,social,computer,english,commerce:"<<endl;
    cin>>math>>social>>computer>>english>>commerce;
}
void student::displaydata()//scope resolution operator
{
    cout<<"----------------";
    cout<<endl;
    cout<<"name="<<name<<endl;
    cout<<"address="<<address<<endl;
    cout<<"section="<<section<<endl;
}
   float student::percentage()//scope resolution operator
   {
       return (math+social+computer+english+commerce)/5;
   }
int main()
{
  student ob;//object
  ob.getdata();
  ob.displaydata();
  cout<<"percentage="<<ob.percentage()<<endl;
}
