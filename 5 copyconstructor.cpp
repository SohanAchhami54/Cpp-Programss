#include<iostream>
using namespace std;
class box
{
    public:
    int length;
    int breadth;
    box(int,int);
    int area();
    box(const box &ob);//copy constructor
};
box::box(int l,int b)
{
    length=l;
    breadth=b;
}
box::area()
{
    return length*breadth;
}
box::box(const box &ob)//copy constructor
{
    length=ob.length;
    breadth=ob.breadth;
}
int main()
{
    box ob(30,40);
    box ob1=ob;
    cout<<"area of box one="<<ob.area()<<endl;
    cout<<"area of box two="<<ob1.area()<<endl;
}
