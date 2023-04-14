#include<iostream>
using namespace std;
int main()
{
	int y,c,s,t;
	cout<<"Enter total number of service years : ";
	cin>>y;
	cout<<"Enter number of clients provided : ";
	cin>>c;
	s=20000;
	t=s+(3000*y)+(2000*c);
	cout<<endl;
	cout<<"Monthly salary is "<<t;
	return 0;
}
