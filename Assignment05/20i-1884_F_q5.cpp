//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
using namespace std;

int digit(int n,int k)
{
	int t1=1, r=0, ans, t2=1, t3=0, x,t4=0;
	x=n;
	if(n==0 && k==0)
	{
		return n;
	}
	while(x!=0)
	{
		x%t1;
		x=x/10;
		t1=t1*10;
	}
	for(int i=1; i<=k; i++)
	{
		t2=t2*10;
	}
	if(t2>t1 || t1==t2)
	{
		cout<<"index out of bound (return -1)"<<endl;
		return -1;
	}
	else if(t1>t2)
	{
		t3=t1/t2;
	}	
	r=n%t3; 
	t4=t3/10;
	ans=r/t4;
	return ans;
}

int main()
{
	int N,K;
	do
	{
		cout<<"(Integer) n = ";
		cin>>N;
		if(N>=0)
		{
			do
			{
				cout<<"(Digit) k = ";
				cin>>K;
				if(K>=0)
				{
					cout<<endl;
					cout<<"output: "<<digit(N,K);
				}
				else
				{
					cout<<"Invalid Input (k>=0)"<<endl;
					cout<<endl;
				}
			}while(K<0);
		}
		else 
		{
			cout<<"Invalid Input (n>=0)"<<endl;
			cout<<endl;
		}
	}while(N<0);
	return 0;
}
