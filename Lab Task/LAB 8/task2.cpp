#include<iostream>
using namespace std;
int main()
{
	double y=0.04;
	int x=1000;
	for(int i=1 ; i <=10 ; i++)
	{
		x=(x*y)+x;
		cout<<i<<" year amount = $"<<x<<endl;
	}
	return 0;
}
