#include<iostream>
using namespace std;

void func()
{
	int num1,num2;
	int sum,multi;
	cout<<"Please enter number 1: ";
	cin>>num1;
	cout<<"Please enter number 2: ";
	cin>>num2;
	sum=num1+num2;
	multi=num1*num2;
	cout<<endl;
	cout<<"Addition = "<<sum<<endl;
	cout<<"Multiplication = "<<multi<<endl;
}

int main()
{
	func();
	return 0;
}
