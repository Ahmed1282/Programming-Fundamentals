#include<iostream>
using namespace std;
//Muhamamd Ahmmed Baig_20i-1884

int main()
{
	int n,x,r,ans=1;
	cout<<"Input a number: ";
	cin>>n;
	cout<<endl;
	x=n;
	while(x != 0)
	{
		r=x%10;
		ans=(ans*r);
		x=x/10;
	}
	cout<<"The product of digits of "<<n<<" is: "<<ans;
	return 0;
}
