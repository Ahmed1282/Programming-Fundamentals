#include <iostream>
using namespace std;

int main()
{
	int sum;
	for (int i=1; i<=4; i++)
	{
		for (int j=1; j<=3; j++)
		{
			cout<<"Day = "<<j<<" Week = "<<i<<" Salary = $20"<<endl;
			sum=sum+20;
		}
		cout<<endl;
	}
	cout<<"Total salary after 4 weeks = $"<<sum<<endl;
	return 0;
}
