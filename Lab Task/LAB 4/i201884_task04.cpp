#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,r1,r2;
	cout<<"a(x^2) + bx + c = 0"<<endl;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	cout<<"Enter c :";
	cin>>c;
	r1=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
	r2=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
	cout<<endl;
	cout<<" 1st root = "<<r1<<endl;
	cout<<" 2nd root = "<<r2<<endl;
	return 0;
	
}
