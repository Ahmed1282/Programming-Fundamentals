#include<iostream>
using namespace std;

void func()
{
	double c,f;
	cout<<"Please enter temperature in Celsius: ";
	cin>>c;
	f=(c*9.0)/5.0+32.0;
	cout<<endl;
	cout<<"Fahrenheit = "<<f<<endl;
}

int main()
{
	func();
	return 0;
}
