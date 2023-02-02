#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int *p=new int[n];
    cout<<"enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
      cin>>p[i];
    }
    cout<<"the elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<setw(5);
    }
      delete []p;
      cout<<endl;
      cout<<"After deleting the value of p is="<<p<<endl;
}
