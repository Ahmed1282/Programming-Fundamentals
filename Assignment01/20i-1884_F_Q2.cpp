#include<iostream>
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	double wage,hour,tax_percentage,tax,pay,net_pay; //Declaring double integers
	cout<<"Please Enter the wage : "; //Asking the user for the wage
	cin>>wage; //Inputing the wage
	cout<<"Please Enter the number of hours worked : "; //Asking the user for the hours worked
	cin>>hour; //Inputting the hours
	cout<<"Please Enter the withholding tax (percentage deduction) : "; //Asking the user for the tax percentage
	cin>>tax_percentage; //Inputing the tax percentage
	pay=wage*hour; //Formula for pay
	tax=(tax_percentage/100)*wage*hour; //Formula for the tax generated in the pay
	net_pay=pay-tax; //net pay after the deduction of tax
	cout<<"The Net Pay is : "<<net_pay<<endl; //outputing the net pay
	return 0;
}
