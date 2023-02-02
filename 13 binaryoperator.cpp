#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex();
    complex(int ,int);
    void show();
    complex operator +(const complex &obj);
};

complex::complex()
{
    real=0;
    imag=0;

}
 complex::complex(int r,int i)
{
    real=r;
    imag=i;
}

void complex::show()
{
    if (imag>0)
    cout<<real<<"+"<<imag<<"i"<<endl;
    else
    cout<<real<<imag<<"i"<<endl;

}

 complex complex::operator+(const complex &obj)
{
    complex ob3;
    ob3.real=real+obj.real;
    ob3.imag=imag+obj.imag;
    return ob3;

}

int main()
{
    complex ob1(2,3),ob2(4,-5),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    cout<<endl;
    ob3.show();
}
