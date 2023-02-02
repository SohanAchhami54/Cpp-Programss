#include<iostream>

using namespace std;

class A
{
public:

//A no-argument constructor
A()
{
	cout << "Constructor called" <<"\n";
}


//A destructor
~A()

{
    cout<<endl;
	cout <<"Destructor called"<<endl;
}
};


int main()
{
	// Calling a no-argument constructor to create the objects of the class A
	A ob;
}

