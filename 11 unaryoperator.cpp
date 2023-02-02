#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void show();
    void operator -();
    void get();
};

void demo::get()
{
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
}

void demo::show()
{
    cout<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

void demo::operator-()
{
    a=-a;
    b=-b;
}

int main()
{
    demo ob;
    ob.get();
    ob.show();
    -ob;
    ob.show();
}
