#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	double ans,i=1,d,sum;
	int n;
	cout<<"Input the last integer between 1 to 98 (without fraction) you want to add: ";
	cin>>n;
	cout<<endl;
	if( n >= 1 && n <= 98)
	{
		while( i<=n )
		{
			if(i < 9)
			{
				d=0.1;
			}
			else
			{
				d=0.01;
			}	
			ans=((i+1)*d)+i;
			sum=ans+sum;
			i++;
		}
		cout<<"The sum of the series = "<<sum<<endl;
	}
	else
	{
		cout<<"Invalid Input";
	}
	return 0;
}
