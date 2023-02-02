#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
     rectangle();//default constructor
    float area();
    rectangle(int,int);// parametrized constructor

    void sum(rectangle,rectangle);//object as a function arguments
};
rectangle::rectangle()//default constructor
{
    length=20;
    breadth=30;
}
 rectangle::rectangle(int l,int b)//parametrized constructor
{
    length=l;
    breadth=b;
}

float rectangle::area()
{
    return length*breadth;
}
void rectangle::sum(rectangle ob1,rectangle ob2)//object as a function arguments
{
    length=ob1.length+ob2.length;
    breadth=ob1.breadth+ob2.breadth;
}
int main()
{
    rectangle ob1,ob2(30,40),ob3;
     ob3.sum(ob1,ob2);
    cout<<endl;
    cout<<"Area 1 ="<<ob1.area()<<endl;
    cout<<"Area 2 ="<<ob2.area()<<endl;
    cout<<"Area 3 ="<<ob3.area()<<endl;

}
