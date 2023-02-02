#include<iostream>
using namespace std;
class A
{
   // private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    friend void sum(A ob);
};

void sum(A ob)
{
    int c;
    c=ob.a+ob.b;
    cout<<"Sum="<<c<<endl;
}
int main()
{
    A obj;
    obj.input();
    sum(obj);
}
