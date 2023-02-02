#include<iostream>
using namespace std;
class A
{
    int a=5;
    int b=5;
public:
    void func()
    {
        int c=a+b;
        cout<<"addition="<<c<<endl;
    }

    void func(int x,int y)
    {
        int z=x-y;
        cout<<"substraction="<<z<<endl;
    }
};

int main()
{
    A obj;
    obj.func();
    obj.func(100,30);
}
