#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    rem=n%2;
    if(rem==0)
    {
        cout<<"the enter value is even number:i.e:"<<n<<endl;
    }
    else
    {
        cout<<"the enter value is odd number:i.e:"<<n<<endl;
    }
}
