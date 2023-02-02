#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int *p=new int[n];
    cout<<"the new size of the array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<(i+1)<<endl;

    }
    cout<<endl;
    delete []p;
    cout<<"after deleting the value of p is="<<p<<endl;
}
