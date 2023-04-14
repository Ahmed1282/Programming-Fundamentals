#include <iostream>
using namespace std;

int main()
{
	int n1, x=2;
	cout<<"Please enter number of rows: ";
	cin>>n1;
	cout<<endl;
	for (int i=1; i<=n1; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<x;
		}
		x=x+2;
		cout<<endl;
	}
	return 0;
	
}
