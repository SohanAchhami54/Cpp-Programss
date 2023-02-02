#include<iostream>
using namespace std;
class sample
{
    int hours,mins;
    public:
    sample(int);
    void display();
};

sample::sample(int t)
{
    hours=t/60;
    mins=t%60;
}
void sample::display()
{
    cout<<hours<<":hours and "<<mins<<":minutes"<<endl;
}

int main()
{
    sample s(340);
    s.display();
}
