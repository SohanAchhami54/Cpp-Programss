#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    float salary;
    employee();//constructor get called when an object get created.
};
employee::employee()
{
    cout<<"constructor is created:"<<endl;
}
int main()
{
    employee ob;
}
