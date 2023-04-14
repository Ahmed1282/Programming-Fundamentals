//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
using namespace std;

int main()
{
	int s,e,sum=0,count=0;
	bool prime = true;
	cout<<"Find prime number within a range:"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Input number for starting range: ";
	cin>>s;
	cout<<"Input number for ending range: ";
	cin>>e;
	if(e>=s)
	{
		cout<<endl;
		cout<<"The prime numbers between 10 and 100 are:"<<endl;
		for( s; s<e; s++)
		{
			prime= true;
			if(s == 0 || e == 1) 
			{
				prime = false;
			}
			else 
			{
				for(int j=2; j<=s/2; j++)
				{
					if(s%j == 0)
					{
						prime = false;
						break;
					}
				}
			}
			if(prime)
			{
				cout<<s<<" ";
				sum=sum+s;
				count++;
			}
		}
		cout<<endl<<endl;
		cout<<"The total number of prime numbers between "<<s<<" to "<< e<<" is: "<<count<<endl;
		cout<<"The sum of all the prime numbers is = "<<sum<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"INVALID INPUT";
	}
	return 0;
}
