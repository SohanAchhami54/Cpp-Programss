#include<iostream>
using namespace std;
void swap (int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"enter the value of x "<<endl;
    cin>>x;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    cout<<"before swap"<<endl;
    cout<<"x="<<x<<":y="<<y<<endl;
    swap(x,y);
    cout<<"after swap"<<endl;
    cout<<"x="<<x<<":y="<<y<<endl;

}
