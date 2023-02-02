#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num=20;
cout<<num<<endl;
cout<<"Hex value="<<hex<<num<<endl;
cout<<"Octal value="<<oct<<num<<endl;
cout<<"Hex value="<<setbase(16)<<num<<endl;
cout<<"Octal value="<<setbase(8)<<num<<endl;
}
