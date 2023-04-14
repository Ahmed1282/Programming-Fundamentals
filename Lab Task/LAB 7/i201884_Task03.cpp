#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout<<"Please enter numbers to make product greater than 100: "<<endl;
	do
	{
		cout<<"Enter an integer: ";
		cin>>n;
		sum=sum+n;
		i++;
			
	}while(sum < 100);
	cout<<"Sum = "<<sum<<endl;
	cout<<"Total numbers of integers enter = "<<i<<endl;
	return 0;
}
