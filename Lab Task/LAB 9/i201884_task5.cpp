#include <iostream>
using namespace std;

int main()
{
	int n1,n2,product;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<endl;
	for (int i=n1; i<=n2; i++)
	{
		for (int j=1; j<=10; j++)
		{
			product=i*j;
			cout<<i<<" * "<<j<<" = "<<product<<endl;
		}
		cout<<endl;
	}	
	return 0;
}
