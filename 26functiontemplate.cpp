#include<iostream>
using namespace std;
template <class A> A sum(A a, A b)
{
    return a+b;
}
int main()
{
    char ch=65,ch1=2;
    cout<<"sum 1="<<sum(10.5,11.2)<<endl;
    cout<<"sum 2="<<sum(11,12)<<endl;
    cout<<"sum 3="<<sum(ch,ch1)<<endl;
}
