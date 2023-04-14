#include<iostream>
#include<cmath>
using namespace std;

void func(double x)
{
	double sqrt;
	sqrt= pow(x,0.5);
	cout<<endl;
	cout<<"Square root of "<<x<<" = "<<sqrt<<endl; 
}

int main()
{
	double x;
	cout<<"Please enter a number to get its square root: ";
	cin>>x;
	func(x);
	return 0;
}
