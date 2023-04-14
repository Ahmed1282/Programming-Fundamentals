#include<iostream>
#include<iomanip>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	int distance;
	double cost;
	cout<<"Please enter the Distance covered?"<<endl;
	cin>>distance;
	cout<<endl;
	if(0 < distance && distance <= 100 )
	{
		cost = 5.00;
		cout<<"Cost = "<<fixed<<setprecision(2)<<cost;
	}
	else if( 100 < distance && distance <= 500)
	{
		cost = 8.00;
		cout<<"Cost = "<<fixed<<setprecision(2)<<cost;
	}
	else if( 500 < distance && distance< 1000)
	{
		cost = 10.00;
		cout<<"Cost = "<<fixed<<setprecision(2)<<cost;
	}
	else if( distance >= 1000 )
	{
		cost = 12.00;
		cout<<"Cost = "<<fixed<<setprecision(2)<<cost;
	}
	else if ( distance <= 0)
	{
		cout<<"Invalid Input"<<endl;
	}
	return 0;
}
