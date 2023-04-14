#include<iostream>
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	double number1,number2; //Declaring double integers
	cout<<"Enter 1st integer  : "; //Asking the user to enter 1st integer
	cin>>number1;//Inputing 1st integer
	cout<<"Enter 2nd integer  : ";//Asking the user to enter 2nd integer
	cin>>number2;//Inputing 2st integer
	cout<<endl; //Ending line
	number1=number1*number2;//Formula
	number2=number1/number2;//Formula
	number1=number1/number2;//Formula
	cout<<"New 1st integer = "<<number1<<endl;// Outputing new 1st integer
	cout<<"New 2nd integer = "<<number2<<endl;// Outputing new 2nd integer
	return 0;
}
	
