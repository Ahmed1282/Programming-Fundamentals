//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,p;
	cout<<"Please enter the table size : ";
	cin>>n;
	cout<<endl;	
	{
		cout<<setw(3)<<"    | ";
		for(int i=1; i<n+1; i++)
		{
			cout<<setw(4)<<i;	
		}
		cout<<endl;
		for(int s=1; s<n+1; s++)
		{
			cout<<setw(3)<<"-----";
		}
		cout<<endl;
		for(int j=1; j<n+1; j++)
		{
			cout<<setw(3)<<j<<" | ";
				for(int k=1; k<n+1; k++)
				{
					p=0;
					p=k*j;
					cout<<setw(4)<<p;
				}
				cout<<endl;
		}
	}
	return 0;
}
