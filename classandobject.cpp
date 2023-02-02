#include<iostream>
using namespace std;
class box
{
    public:
    float length;
    float breadth;
    float height;

    float getarea()
    {
        return(length*breadth);
    }
    float getvolume()
    {
        return(length*breadth*height);
    }
    void displaydimension()
    {
        cout<<length<<"*"<<breadth<<"*"<<height<<endl;
    }

};
int main()
{
    box ob;
    ob.length=10;
    ob.breadth=11;
    ob.height=12;
    cout<<"area="<<ob.getarea()<<endl;
    cout<<"volume="<<ob.getvolume()<<endl;
    cout<<"Dimension=";
    ob.displaydimension();
}
