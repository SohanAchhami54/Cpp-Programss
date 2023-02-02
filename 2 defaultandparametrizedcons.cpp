#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int ,int);

    int area();
};

rectangle::rectangle()//default constructor
{
    length=10;
    breadth=20;
}
int rectangle::area()
{
    return length*breadth;
}
rectangle::rectangle(int l,int b)//parametrized constructor
{
    length=l;
    breadth=b;
}
int main()
{
    rectangle ob,ob1(10,30);
    cout<<"Area of circle one="<<ob.area()<<endl;
    cout<<"Area of circle two="<<ob1.area()<<endl;
}
