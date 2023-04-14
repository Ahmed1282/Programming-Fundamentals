#include<iostream>
using namespace std;

void func(int num1, int num2)
{
	cout<<endl;
	if(num1>num2)
	{
		cout<<"Number1 > Number2"<<endl;
	}
	else if(num1<num2)
	{
		cout<<"Number1 < Number2"<<endl;
	}
	else if(num1 == num2)
	{
		cout<<"Number1 = Number2"<<endl;
	}
}

int main()
{
	int num1, num2;
	cout<<"Please enter Number1: ";
	cin>>num1;
	cout<<"Please enter Number2: ";
	cin>>num2;
	func(num1,num2);
	return 0;
}
