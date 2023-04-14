#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,x,p=0,o=0,e=0,max,min=0,avg1=0,avg2;
	cout<<"Please enter postive numbers"<<endl;
	do
	{
		cout<<"Enter Integer: ";
		cin>>n;
		x=n;
		if(x < 0 && x != -1)
		{
			cout<<"Invalid Input"<<endl;
		}
		if(x > 0)
		{	
			p++;
		}
		
		if( x%2 != 0 && x != -1 && x > 0)
		{
			o++;
		}
		
		if( x%2 == 0 && x > 0)
		{
			e++;
		}
		if(max < x && x != -1 && x > 0)
		{
			max=x;	
		}
		if(min > x && x != -1 && x > 0 || min == 0)
		{
			min=x;
		}
		if(x != -1 && x > 0)
		{
			avg1=avg1+x;
		}
		
	}while( n != -1);
	cout<<endl;
	avg2=avg1/p;
	cout<<"Number of positive integers entered is: "<<p<<endl;
	cout<<"Number of odd integers entered is: "<<o<<endl;
	cout<<"Number of even integers entered is: "<<e<<endl;
	cout<<"The maximum value entered is: "<<max<<endl;
	cout<<"The minimum value entered is: "<<min<<endl;
	cout<<"The average of all entered numbers is: "<<avg2<<endl;
	return 0;
}
