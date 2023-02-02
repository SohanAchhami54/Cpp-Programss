#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:

    void gettime(int,int);
    void puttime();
    void sumtime(time,time);
};

  void time::gettime(int h,int m)
{
    hours=h;
    minutes=m;
}
void time::puttime()
{
    cout<<hours<<"hours and "<<minutes<<"minutes"<<endl;
}
void time::sumtime(time T1,time T2)
{
    minutes=T1.minutes+T2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=T1.hours+T2.hours+hours;

}
int main()
{
    time T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sumtime(T1,T2);

    cout<<"T1 = "; T1.puttime();
    cout<<"T2 = "; T2.puttime();
    cout<<"T3 = "; T3.puttime();
}

