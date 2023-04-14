#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,i=2;
	bool prime= true;
	cout<<"Please enter a number(integer) of any length and not a negative number: "<<endl;
	do
	{
		cout<<"Input a number to check prime or not: ";
		cin>>n;
		if(n<0)
		{
			cout<<"Invalid Input"<<endl;
		}
	}while(n < 0);
	cout<<endl;
	while(i <= n/2)
	{
		if(n%i == 0)
		{
			prime = false;
		}
		i++;
	}
	if(prime == true && n != 1 && n != 0)
	{
		cout<<"The entered number is a prime number"<<endl;
	}
	else if(prime == false || n == 1 || n == 0)
	{
		cout<<"The entered number is not a prime number"<<endl;
	}
	return 0;
}
