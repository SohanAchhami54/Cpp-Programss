#include<iostream>
#include<string>
using namespace std;
class Student{
public:
//member variables
string name;
int age;
double total_marks;
//member functions
void setName(string n);
void setAge(int a);
void setMarks(double m);
void display();
string getName();
int getAge();
double getMarks();
};
void Student::setName(string n)
{
name=n;
}
void Student::setAge(int a)
{
age=a;
}
void Student::setMarks(double m)
{
total_marks=m;
}
string Student::getName(){
return name;
}
int Student::getAge(){
return age;
}
double Student::getMarks(){
return total_marks;
}
void Student::display()
{
cout<<"Following are student info: "<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Total Marks: "<<getMarks()<<endl;
}
int main()
{
Student s;
s.setName("Ram");
s.setAge(20);
s.setMarks(30.24);
s.display();
}

