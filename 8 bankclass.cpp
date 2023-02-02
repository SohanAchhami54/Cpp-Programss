#include<iostream>
using namespace std;
class bank
{
    string name;
    double balanceamount;
    double accountnumber;
    public:
    void displayinfo();
    void getinfo();
    void deposit();
    void withdraw();
};
void bank::getinfo()
{
    cout<<"Name of the customer=";
    cin>>name;
    cout<<"Balance-Amount=";
    cin>>balanceamount;
    cout<<"Account-Number=";
    cin>>accountnumber;
}

void bank::displayinfo()
{
    cout<<endl;
    cout<<"Name of the customer="<<name<<endl;
    cout<<"Balance amount="<<balanceamount<<endl;
    cout<<"Account number="<<accountnumber<<endl;
}

void bank::withdraw()
{
    cout<<endl;
    int wd;
    cout<<"Enter the amount to be withdraw=";
    cin>>wd;
    if(wd>balanceamount)
    {
        cout<<"Insufficient Balance:"<<endl;
    }
    else
    {
        balanceamount-=wd;
        cout<<"Transaction Successful:"<<endl;
        cout<<"after withdraw the amount is:"<<balanceamount<<endl;
    }
}

void bank::deposit()
{
    cout<<endl;
    int de;
    cout<<"Enter the amount to be deposit=";
    cin>>de;
    balanceamount+=de;
    cout<<"after deposit the money is:"<<balanceamount<<endl;
}
int main()
{
    bank ob;
    ob.getinfo();
    int choice=1;
    int option=1;
    do
    {
        cout<<endl;
    cout<<"PRESS 1::DEPOSIT 2::WITHDRAWN 3::INFO:"<<endl;
    cin>>choice;
    switch(choice)
    {

        case 1:ob.deposit();
               break;
        case 2:ob.withdraw();
               break;
        case 3:ob.displayinfo();
               break;
        default:cout<<"INVALID COMMAND:"<<endl;
    }
    cout<<"Do you want more transaction(1 or 0):"<<endl;
    cin>>option;


    }while(option!=0);
}



