#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    while (n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    cout<<"the reverse number is:"<<rev<<endl;

}
