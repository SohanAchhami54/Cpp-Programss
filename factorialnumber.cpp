#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        fact=fact*i;
    cout<<"the factorial of the entered number is:"<<fact<<endl;
}
