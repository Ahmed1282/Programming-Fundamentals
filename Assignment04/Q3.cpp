//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
using namespace std;

int main()
{
	int n, c;
	//PARTa
	cout<<"(PART a - Pascal`s triangle)"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<endl;
	for(int i=1; i<=n; i++)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	//PARTb
	cout<<"(PART b - Invert of Pascal`s triangle)"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<endl;
	n=n+1;
	for(int i=n; i>0; i--)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	//PARTc
	cout<<"(PART c - Combine a and b)"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<endl;
	n=n+1;
	for(int i=1; i<=n; i++)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}	
	for(int i=n-1; i>0; i--)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	//Partd
	cout<<"(PART d - Combine a and b [both reversed] )"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<endl;
	n=n+1;
	for(int i=n; i>0; i--)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}
	for(int i=2; i<=n; i++)
	{
		c=1;
		for(int j=n-i; j>0; j--)
		{
			cout<<"    ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<c<<"      ";
			c=c*(i-k)/k;
		}
		cout<<endl;
	}
	return 0;
}
