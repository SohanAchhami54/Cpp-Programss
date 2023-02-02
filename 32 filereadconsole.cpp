#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream file;
    file.open("Sohan.txt",ios::in);
    if(!file)
    {
        cout<<"Error opening files!!"<<endl;
    }
    else
    {
        while(!file.eof())
        {
            file>>ch;
            cout<<ch;
        }
        file.close();
    }

}
