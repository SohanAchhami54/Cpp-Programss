#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:

    test(int c,int d)
    {
       a=c;
       b=d;
    }
    void display()
    {
        cout<<"the value of a="<<a<<endl;
        cout<<"the value of b="<<b<<endl;
    }
    test(const test &ob)
    {
        a=ob.a;
        b=ob.b;
    }

};
int main()
{
    test ob(30,40);
    test ob1=ob;
     ob.display();
     cout<<endl;
     ob1.display();
}
