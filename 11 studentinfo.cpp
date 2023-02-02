#include<iostream>
using namespace std;
class student
{

    public:
    string name;
    int age;
    double mark;

 void student(string,int,double);
  void  displayinfo();
  //  percentage();
  //  compare(student,student);
};

void student::displayinfo(string n,int a,double m)
{
    name=n;
    age=a;
    mark=m;
}

int main()
{
    student ob("Sohan",20,450);
    ob.displayinfo();
}
