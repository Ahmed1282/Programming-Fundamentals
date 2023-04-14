#include<iostream>
using namespace std;

void func(int hr, int min)
{
	int s;
	s=(hr*3600) + (min*60);
	cout<<endl;
	cout<<"Total seconds = "<<s<<endl;	
}

int main()
{
	int hr,min;
	cout<<"Enter number of hours: ";
	cin>>hr;
	cout<<"Enter number of minutes: ";
	cin>>min;
	func(hr,min);
	return 0;
}
