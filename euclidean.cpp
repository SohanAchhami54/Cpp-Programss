#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	int r = 0;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int num1,num2;
	cout << "Enter the first number:";
	cin >> num1;
	cout << "Enter the second number:";
	cin >> num2;
	cout << "GCD("<< num1 << "," << num2 << "): " << gcd(num1,num2) << endl;
	cout<<endl;
	cout<<"Name=Smaran Rawal"<<endl;
	cout<<"Roll number=20"<<endl;
	return 0;
}
