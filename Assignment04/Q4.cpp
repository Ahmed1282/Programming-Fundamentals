//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
using namespace std;

int main()
{
	int total,num,o=0,e=0,z=0;
	cout<<"Please mention the total number of integers to enter (from the list of positive, negative, or zeros) = ";
	cin>>total;
	cout<<"Please now enter the list of all "<<total<<" numbers:"<<endl;
	for(int i=0; i<total; i++)
	{
		cin>>num;
		if(num == 0)
		{	
			z++;
		}
		if(num%2 != 0 && num != 0)
		{
			o++;
		}
		if(num%2 == 0 || num== 0)
		{
			e++;
		}
	}
	cout<<endl;
	cout<<"There are total "<<e<<" evens which includes "<<z<<" zeros."<<endl;
	cout<<"The total odd numbers you have entered is: "<<o<<endl;
	return 0;
}
