#include<iostream>
#include<iomanip>
using namespace std;
class sohan
{
    public:
    sohan()//constructor get called when an object is created.
    {
       int n=10;
        cout<<setw(5)<<n<<endl;
    }
    ~sohan()
    {
        cout<<"--object created is destroyed--:"<<endl;
    }
};
int main()
{
    sohan ob;
}
