#include<iostream>
using namespace std;
template<class A, class B> A sum(A a, B b)
{
    return a+b;
}
int main()
{
    cout<<"Sum="<<sum(10.5,14)<<endl;
}
