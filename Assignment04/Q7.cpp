//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n, sq, c, count=0;
	cout<<setw(10)<<" ";
	cout<<"Enter a range for all sides: ";
	cin>>n;
	cout<<endl;
	cout<<setw(10)<<" ";
	cout<<"Side-a"<<setw(3)<<" ";
	cout<<"Side-b"<<setw(3)<<" ";
	cout<<"hypotenuse"<<endl;
	cout<<setw(10)<<" ";
	cout<<"----------------------------"<<endl;
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=n; j++)
		{
			c=(i*i)+(j*j);
			sq=sqrt(c);
			if(sq*sq == c && i != 0 && i != 1 && j != 0 && j != 1 && sq<=n)
			{
				cout<<setw(13)<<i<<setw(9)<<j<<setw(12)<<sq<<endl;
				count++;
			}
		}
	}
	cout<<endl;
	cout<<"A total of "<<count<<" Pythagorean triples were found in range "<<n<<"."<<endl;
	return 0;
}
