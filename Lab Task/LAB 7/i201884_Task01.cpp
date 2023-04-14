#include<iostream>
using namespace std;
int main()
{
	double num,sum=0,i=0;
	cout<<"Please enter a digit: "<<endl;
	cin>>num;
	while(num != 0)
	{ 	
		sum=sum+num;
		i++;
		cin>>num;	
	}
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average = "<<sum/i<<endl;
	return 0;
}
