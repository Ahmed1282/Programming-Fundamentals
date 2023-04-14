#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n1,n2,i=1,d;
	cout<<"Input the first number: ";
	cin>>n1;
	cout<<"Input the second number: ";
	cin>>n2;
	cout<<endl;
	while(i <= n1 && i <= n2)
	{
		if(n1%i == 0 && n2%i == 0)
		{
			d=i;
		}
		i++;
	}
	cout<<"The Greatest Common Divisor is: "<<d;
	return 0;
}
