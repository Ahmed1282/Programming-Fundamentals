#include<iostream>
using namespace std;
int main()
{
	double c,f=1;
	for(int i=1; i>0 ; i++)
	{
		cout<<"Please enter temperature in Fahrenheit?"<<endl;
		cin>>f;
		c=(5.0/9.0)*(f-32.0);
		if(f == 0)
		{
			cout<<"End"<<endl;
			break;
		}
		else
		{
			cout<<"\ntemperature "<<i<<" in Celsius = "<<c<<endl<<endl;
		}
	}
	return 0;
}
