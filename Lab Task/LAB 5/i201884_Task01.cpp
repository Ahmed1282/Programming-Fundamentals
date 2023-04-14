#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Please enter Number 1: ";
	cin>>num1;
	cout<<"Please enter Number 2: ";
	cin>>num2;
	cout<<endl;
	if(num1>num2)
	{
		cout<<"Number 1 "<<" > "<<" Number 2";
	}
	else if(num1<num2)
	{
		cout<<"Number 1 "<<" < "<<" Number 2";
	}
	else if(num1==num2)
	{
		cout<<"Number 1 "<<" = "<<" Number 2 ";
	}
	return 0;	
}
