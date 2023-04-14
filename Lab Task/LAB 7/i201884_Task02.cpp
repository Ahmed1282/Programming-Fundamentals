#include<iostream>
using namespace std;
int main()
{
	int n,i=1,f=1;
	cout<<"Please enter the number for factorial: ";
	cin>>n;
	if(n < 0)
	{
		cout<<"Invalid Input"<<endl;
	}
	else if(n == 0)
	{
		f=1;
		cout<<n<<"! = "<<f<<endl;	
	}
	else
	{
		while( i<= n)
		{
			f=f*i;
			i++;
		}
		cout<<n<<"! = "<<f<<endl;
	}
	return 0;
}
