#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    float mark;
    void setname(string n);
    void setage(int r);
    void setmark(float f);


    string getname();
    int getage();
    float getmark();


};
 void student::setname(string n)
 {
     name=n;
 }
 void student::setage(int r)
 {
     age=r;
 }
 void student::setmark(float f)
 {
     mark=f;
 }

 string student::getname()
 {
     return name;
 }
 int student::getage()
 {
     return age;
 }
 float student:: getmark()
 {
     return mark;
 }

int main()
{
   student s;
   s.setname("sohan achhami");
   s.setage(5);
   s.setmark(100.5);
   //s.setpercentage(100.5*0.30);
  cout<<"name of the student is:"<<s.getname()<<endl;
   cout<<"age="<<s.getage()<<endl;
   cout<<"mark="<<s.getmark()<<endl;
  // cout<<"percentage="<<s.getpercentage()<<endl;
}
