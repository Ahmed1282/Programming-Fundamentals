#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,i=0,x=0,y=1,z;
	cout<<"Input number of terms to display: ";
	cin>>n;
	cout<<endl;
	cout<<"Here is the Fibonacci series upto to "<<n<<" terms:"<<endl;
	while(i < n)
	{
		cout<<x<<" ";
		z=x+y;
		x=y;
		y=z;
		i++;
	}
	return 0;
}
