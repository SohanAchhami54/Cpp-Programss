#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Sohan.txt",ios::out);
    if(!file)
    {
        cout<<"File does n't created:"<<endl;
    }
    else
    {
        cout<<"File printed Successfully:"<<endl;
        file<<"I am very happy to created a file"<<endl;
        file<<"Hello world"<<endl;
        file.close();

    }
}

