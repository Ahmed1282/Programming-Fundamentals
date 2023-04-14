#include<iostream>
using namespace std;
int main()
{
	double total=0,x=2000,tax=0.10,ntax,s,total2=20000;
	for(int i=1; i<=10; i++)
	{
		total=x+total;
		cout<<"Amount at the end of month "<< i<<" = "<<total<<endl;
	}
	for(int j=11; j<=12; j++)
	{
		ntax=tax*x;
		s=x-ntax;
		total2=s+total2;
		cout<<"Amount at the end of month "<<j<<" = "<<total2<<endl;
	}
	cout<<"TAX = "<<ntax*2<<endl;
	return 0;
}
