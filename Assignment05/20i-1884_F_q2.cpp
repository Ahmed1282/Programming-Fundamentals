//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
using namespace std;

bool isHappyNumber(int num);

int main()
{
	int n;
	do 
	{
		cout<<"Number: ";
		cin>>n;
		if(n>0)
		{
			cout<<endl;
			if(isHappyNumber(n) == 1)
			{
				cout<<"Output: Happy Number";
			}
			else if(isHappyNumber(n) == 0)
			{
				cout<<"Output: Sad Number";
			}
		}
		else
		{
			cout<<endl;
			cout<<"Invalid Input (Number>0)"<<endl;
			cout<<endl;
		}
			
	}while(n<=0);
	return 0;
}

bool isHappyNumber(int num)
{
	int r,rsq,ans=0,num2=0,count=0;
	while(num != 1 && count <= 100)
	{
		while(num != 0)
		{
			r=num%10;
			num=num/10;
			rsq=(r*r);
			ans=ans+rsq;
		}
		count++;
		num=ans;
		ans=0;
	}
	if(count<=100)
	{
		return true;
	}
	else if(count>100)
	{
		return false;
	}
}
