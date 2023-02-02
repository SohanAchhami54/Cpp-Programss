4
#include<iostream>
using namespace std;
class box
{
    public:
    int length;
    int breadth;

    box();//default constructor
    box(int,int);
    int area();
};
  box::box()//default constructor.
{
    length=20;
    breadth=30;
}
box::box(int l,int b)//parametrized constructor.
{
    length=l;
    breadth=b;
}
int box::area()
{
    return length*breadth;
}
int main()
{
    box ob,ob1(12,45);
    cout<<"Area of box="<<ob.area()<<endl;
    cout<<"Area of box two="<<ob1.area()<<endl;
}
