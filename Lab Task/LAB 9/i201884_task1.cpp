#include <iostream>
using namespace std;

int main()
{
	int n;
	double avg;	
	for (int i=1; i<=4; i++)
	{
		int sum=0;
		for (int j=1; j<=3; j++)
		{
			cout<<"Enter score: ";
			cin>>n;
			sum=sum+n;	
		}
		avg = sum/3;
		cout<<"Average = "<<avg<<endl;
		cout<<endl;	
	}
	return 0;
}
