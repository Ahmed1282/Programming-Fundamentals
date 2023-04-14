#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r,c,p;
	const double pi=3.1415;
	cout<<"Enter the radius : ";
	cin>>r;
	c=2*pi*r;
	p=2*r;
	cout<<endl;
	cout<<"Circumference = "<<c<<" or "<<p<<"pi"<<endl;
	return 0;
	
}
