//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
using namespace std;

void maxFrequencyOfNumber(int num,int & digit, int &maxFreq);

int main()
{
	int n=0,d=0,m=0;
	do
	{
		cout<<"Input: N = ";
		cin>>n;
		if(n>0)
		{
			maxFrequencyOfNumber(n,d,m);	
			cout<<endl;
			cout<<"Digit: "<<d<<endl;
			cout<<"Max Frequency: "<<m<<endl;
		}
		else
		{
			cout<<endl;
			cout<<"Invalid input (N>0)"<<endl;
			cout<<endl;
		}
	}while(n<=0);
	return 0;
}

void maxFrequencyOfNumber(int num,int & digit, int &maxFreq)
{
	int r,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	while(num !=0)
	{
		r=num%10;
		num=num/10;
		if(r==0)
		{
			c0++;
		}
		else if(r==1)
		{
			c1++;
		}
		else if(r==2)
		{
			c2++;
		}
		else if(r==3)
		{
			c3++;
		}
		else if(r==4)
		{
			c4++;
		}
		else if(r==5)
		{
			c5++;
		}
		else if(r==6)
		{
			c6++;
		}
		else if(r==7)
		{
			c7++;
		}
		else if(r==8)
		{
			c8++;
		}
		else if(r==9)
		{
			c9++;
		}
	}
	if(c0>maxFreq)
	{
		digit=0;
		maxFreq=c0;
	}
	if(c1>maxFreq)
	{
		digit=1;
		maxFreq=c1;
	}
	if(c2>maxFreq)
	{
		digit=2;
		maxFreq=c2;
	}
	if(c3>maxFreq)
	{
		digit=3;
		maxFreq=c3;
	}
	if(c4>maxFreq)
	{
		digit=4;
		maxFreq=c4;
	}
	if(c5>maxFreq)
	{
		digit=5;
		maxFreq=c5;
	}
	if(c6>maxFreq)
	{
		digit=6;
		maxFreq=c6;
	}
	if(c7>maxFreq)
	{
		digit=7;
		maxFreq=c7;
	}
	if(c8>maxFreq)
	{
		digit=8;
		maxFreq=c8;
	}
	if(c9>maxFreq)
	{
		digit=9;
		maxFreq=c9;
	}
}
