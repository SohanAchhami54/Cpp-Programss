#include<iostream>
using namespace std;
class sample
{
    float hrs;
    int minutes;
    public:
    sample(float, int);
    operator float();
};

sample::sample(float h,int m)
{
    hrs=h;
    minutes=m;
}
sample::operator float()
{
    return static_cast<int> (hrs*60.0+minutes);
}

int main()
{
    float duration;
    sample s(2.12,45);
    duration=s;
    cout<<"Duration="<<duration<<"mins"<<endl;


}
