#include<iostream>
#include<cmath>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,x,i=0,r,ans,ans2=0;
	cout<<"Please enter the number to check whether its Armstrong number or not: ";
	cin>>n;
	x=n;
	cout<<endl;
	while(x != 0 )
	{
		x=x/10;
		i++;
	}
	x=n;
	while(x != 0)
	{
		r=x%10;
		ans=pow(r,i);
		ans2=ans2+ans;
		x=x/10;
	}
	if( ans2 == n )
	{
		cout<<"TRUE (Given integer is a Armstrong number)";
	}
	else
	{
		cout<<"FALSE (Given integer is not a Armstrong number)";
	}
	return 0;
}
