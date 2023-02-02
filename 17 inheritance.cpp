#include<iostream>
using namespace std;
class base
{
   protected:
   int a,b;
   public:
  void input()
  {
      cout<<"enter the value of a and b"<<endl;
      cin>>a>>b;
  }
};

class derived:public base
{
private:
    int m,n;
public:
    void getdata()
    {
        cout<<"enter the value of m and n"<<endl;
        cin>>m>>n;
    }
    void display()
    {
        cout<<endl;
        cout<<"m="<<m<<"  n="<<n<<endl;
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
};

int main()
{
    derived ob;
    ob.input();
    ob.getdata();
    ob.display();
}
