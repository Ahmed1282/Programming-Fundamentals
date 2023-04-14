#include<iostream>
using namespace std;
int main()
{
	int s,t,a,total;
	for(int i=0; i<5;i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"Enter Score: ";
			cin>>s;
			t=t+s;
		}
		a=t/3;
		t=0;
		cout<<"Average = "<<a<<endl<<endl;
	}
	return 0;
}
