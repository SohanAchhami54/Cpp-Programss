#include<iostream>
using namespace std;
class person
{
   public:
   string name;
   int age;

   virtual void display()=0;
   virtual void calculate_percentage()=0;
};
class student:public person
{
float mark[5]={40.5,41,42.5,43,44.5};
float sum=0;
public:

    student(string N,int A)
    {
        name=N;
        age=A;
    }
    void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }

    void calculate_percentage()
    {

        for( int i=0;i<5;i++)
        {
          sum=sum+mark[i];
        }
        cout<<"percentage="<<(sum/500)*100<<endl;
    }

};
int main()
{
    student ob1("Sohan",20);
    person *obj=&ob1;

    obj->display();
    obj->calculate_percentage();
}
