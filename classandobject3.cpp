#include<iostream>
using namespace std;
class box
{
    public:
    float length;
    float breadth;

void getdata();
void display();
float getarea();
};
void box::getdata()
{
    cout<<"enter the value of length=";
    cin>>length;
    cout<<"enter the value of breadth=";
    cin>>breadth;
}

void box::display()
{
    cout<<"length="<<length<<endl;
    cout<<"breadth="<<breadth<<endl;
}
float box::getarea()
{
    return length*breadth;
}
int main()
{
    box ob,ob1;
    ob.getdata();
    ob.display();
    ob1.getdata();
    ob1.display();
    cout<<"area of box 1 ="<<ob.getarea()<<endl;
    cout<<"area of box 2 ="<<ob1.getarea()<<endl;
}
