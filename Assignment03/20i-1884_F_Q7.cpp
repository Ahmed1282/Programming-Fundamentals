#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,f,l,sum;
	cout<<"Program to find the sum of first and last digit of a number entered by the user"<<endl;
	cout<<"Input any number: ";
	cin>>n;
	l=n%10;
	f=n;
	while( f >= 10)
	{
		f=f/10;
	}
	sum=l+f;
	cout<<endl;
	cout<<"The first digit of "<<n<<" is: "<<f<<endl;
	cout<<"The last digit of "<<n<<" is: "<<l<<endl;
	cout<<"The sum of first and last digit of "<<n<<" is: "<<sum<<endl;
	return 0;
	
}
