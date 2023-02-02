
#include <iostream>
using namespace std;
int exgcd(int a,int b,int &x,int &y)
{
	int d;
	if(b == 0)
	{
		d = a;
		x = 1;
		y = 0;
		return a;
	}

	else
	{
		d = exgcd(b, a % b,x,y);
		int temp = x;
		x = y;
		y = temp - ((a / b) * y);
		return d;
	}
}

int main()
{
	int a,b,x,y,GCD;
	cout << "Enter the first number(a):";
	cin >> a;
	cout << "Enter the second number(b):";
	cin >> b;
	GCD = exgcd(a,b,x,y);
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
	cout << "GCD:" << GCD << endl;
	cout<<endl;
	cout<<"Name=Smaran Rawal"<<endl;
	cout<<"Roll number=21"<<endl;
	return 0;
}
