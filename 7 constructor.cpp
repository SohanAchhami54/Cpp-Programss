#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    rectangle();
    rectangle(int ,int);
    void get();
    int area();
};

 rectangle::rectangle()
{
    length=length;
    breadth=breadth;
}
void rectangle::get()
{
    cout<<"enter length=";
    cin>>length;
    cout<<"enter breadth=";
    cin>>breadth;
}
int rectangle::area()
{
    return length*breadth;
}

 rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

int main()
{
    rectangle ob,ob1(20,30);
    ob.get();
    cout<<"Area of rectangle one="<<ob.area()<<endl;
    cout<<"Area of rectangle two="<<ob1.area()<<endl;
}
