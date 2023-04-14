#include<iostream>
using namespace std;
int main()
{
	int t,c;
	cout<<"Input the number of terms : ";
	cin>>t;
	for(int i=1; i <=t; i++)
	{
		c=i*i*i;
		cout<<"Number is : "<<i<<" and the cube of "<<i<<" is : "<<c<<endl;
	}
	return 0;
}
