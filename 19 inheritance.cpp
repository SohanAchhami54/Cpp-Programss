#include<iostream>
using namespace std;
class shape
{
    protected:
    int length;
    int breadth;
    public:
    shape(int l,int b)
    {
        length=l;
        breadth=b;
    }

};

class cuboid:public shape
{
    int height;
    public:
    cuboid(int l,int b,int h):shape(l,b),height(h){};
    int volume()
    {
        return length*breadth*height;
    }
};
class rectangle:public shape
{
    string color;
public:
    rectangle(int l,int b,string s):shape(l,b),color(s){};
    int area()
    {
        return length*breadth;
    }
    string getcolor()
    {
        return color;
    }
};
int main()
{
    rectangle r(10,20,"Red");
    cout<<r.getcolor()<<" color rectangle has area:"<<r.area()<<endl;
    cuboid c(30,40,50);
    cout<<"Volume="<<c.volume()<<endl;
}
