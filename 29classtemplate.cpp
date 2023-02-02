#include<iostream>
using namespace std;
template <class T1,class T2>
class student
{
    T1 name;
    T2 age;
public:
    student(T1 name,T2 age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"name="<<this->name<<"  age="<<this->age<<endl;
    }
};
int main()
{
    student<string,int> obj("Sohan",20);
    obj.display();
}
