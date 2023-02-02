#include<iostream>
using namespace std;
class Base
{
    public:
  virtual   void display()
    {
        cout<<"Base Class"<<endl;
    }
};
class Derieved:public Base
{
    public:
    void display()
    {
        cout<<"Derieved Class"<<endl;
    }
};
int main()
{
    Derieved ob;
    Base *obj=&ob;
    obj->display();
}
