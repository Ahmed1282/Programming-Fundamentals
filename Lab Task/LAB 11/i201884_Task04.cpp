#include<iostream>
using namespace std;

int qualityPoints(int);

int main()
{
	int num;
	cout<<"Please enter your average Marks: ";
	cin>>num;
	cout<<endl;
	cout<<qualityPoints(num)<<endl;
	return 0;
}

int qualityPoints(int n)
{
	if(n>=90 && n<=100)
	{
		cout<<"Average is between 90 and 100 so value = ";
		return 4;
	}
	else if(n>=80 && n<=89)
	{
		cout<<"Average is between 80 and 89 so value = ";
		return 3;
	}
	else if(n>=70 && n<=79)
	{
		cout<<"Average is between 70 and 79 so value = ";
		return 2;
	}
	else if(n>=60 && n<=69)
	{
		cout<<"Average is between 60 and 69 so value = ";
		return 1;
	}
	else if(n>=0 && n<=59)
	{
		cout<<"Average is below 60 so value = ";
		return 0;
	}
}
