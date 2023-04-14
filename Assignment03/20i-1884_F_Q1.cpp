#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int i=0,ans=0,n;
	cout<<"Please enter the number to check whether its Trianglar number or not: ";
	cin>>n;
	cout<<endl;
	if(n == 0)
	{
		cout<<"TRUE (Given integer is a triangular number)";
	}
	if(n < 0)
	{
		cout<<"FALSE (Trianglar number is not negative number)";
	}
	else 
	{
		while(ans < n)
		{
			ans=ans+i;
			if(ans == n)
			{
				cout<<"TRUE (Given integer is a triangular number)";
			}
			i++;
		}
		if (ans != n)
		{
			cout<<"FALSE (Given integer is not a triangular number)";
		}
	}
	return 0;
}
