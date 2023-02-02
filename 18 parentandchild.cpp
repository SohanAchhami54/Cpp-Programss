#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
public:
    person(string n,int a)
    {
        name=n;//name=sohan
        age=a;//
    }
    void display()
    {
        cout<<"name="<<name<<"  Age="<<age<<endl;
    }
};

class student :public person
{

    double mark;
public:

    student(string n,int a,double m):person(n,a),mark(m){};
    double getpercent()
    {
        return student mark/5;
    }
};


int main()
{
   student s("Sohan",20,350);
   s.display();
   cout<<"Percentage="<<s.getpercent()<<endl;
}
