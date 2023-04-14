#include<iostream>
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	int days,years,months,rdays_year,rdays_month; //Declaring integers
	cout<<"Please enter the number of days : "; //Asking the user to enter number of days
	cin>>days; //Inputting days
	years=days/365; // Formula to calculate number of years
	rdays_year=days%365; //Remainding days after years are calculated
	months=rdays_year/30; //Formula to calculate months
	rdays_month=rdays_year%30; //Remaining days after calculating month
	cout<<years<<" years  "<<months<<" months  "<<rdays_month<<" days"<<endl; //Outputing years months and days
	return 0;
}
