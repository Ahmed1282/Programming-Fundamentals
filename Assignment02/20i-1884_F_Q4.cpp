#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	int day,month;
	cout<<"Please enter the number of Month(1-12)"<<endl;
	cin>>month;
	cout<<"Please enter the number of Day(1-31)"<<endl;
	cin>>day;
	cout<<endl;
	cout<<day<<"/"<<month<<endl;
	cout<<endl;
	if(month == 1)
	{
		cout<<"Winter"<<endl;
	}
	else if(month == 2)
	{
		cout<<"Winter"<<endl;
	}
	else if(month == 3)
	{
		if(day >= 1 && day <= 15)
		{
			cout<<"Winter"<<endl;
		}
		else if(day >= 16 && day <= 31)
		{
			cout<<"Spring"<<endl;
		}
	}
	else if(month == 4)
	{
		cout<<"Spring"<<endl;
	}
	else if(month == 5)
	{
		cout<<"Spring"<<endl;
	}
	else if(month == 6)
	{
		if(day >= 1 && day <= 15)
		{
			cout<<"Spring"<<endl;
		}
		else if(day >= 16 && day <= 31)
		{
			cout<<"Summer"<<endl;
		}
	}
	else if(month == 7)
	{
		cout<<"Summer"<<endl;
	}
	else if(month == 8)
	{
		cout<<"Summer"<<endl;
	}
	else if(month == 9)
	{
		if(day >= 1 && day <= 15)
		{
			cout<<"Summer"<<endl;
		}
		else if(day >= 16 && day <= 31)
		{
			cout<<"Fall"<<endl;
		}
	}
	else if(month == 10)
	{
		cout<<"Fall"<<endl;
	}
	else if(month == 11)
	{
		cout<<"Fall"<<endl;
	}
	else if(month == 12)
	{
		if(day >= 1 && day <= 15)
		{
			cout<<"Fall"<<endl;
		}
		else if(day >= 16 && day <= 31)
		{
			cout<<"Winter"<<endl;
		}
	}
	else if( month > 12 || month <=0 || day <=0 || day > 31)
	{
		cout<<"Invalid Input"<<endl;
	}
	return 0;
}
	
