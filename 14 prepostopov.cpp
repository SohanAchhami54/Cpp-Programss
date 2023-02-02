#include<iostream>
using namespace std;
class add
{
    int a;
    public:
    add(int);
    void show();
    void operator ++();
    void operator ++(int);
};
add::add(int b)
{
    a=b;
}

void add::show()
{
    cout<<"a="<<a<<endl;
}
void add::operator ++()
{
    ++a;
}

void add::operator ++(int)
{
    a++;
}
int main()
{
    add ob(10);
    ob.show();
    ++ob;
    cout<<endl;
    ob.show();
    cout<<endl;
    ob++;
    ob.show();

}
