#include<iostream>
#include<iomanip> //For using setw and drawing
#include<string> //For using strings
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	string str; //Declaring string
	cout<<"Please enter a string: "<<endl; //Asking user to enter string
	cin>>str; //Inputting string
	cout<<setw(21)<<str<<setw(14)<<str<<endl;//Setting up a set width of 21 then outputing the string then setting up another width by 14 then again outputing the string
	cout<<setw(22)<<str<<setw(12)<<str<<endl;//Setting up a set width of 22 then outputing the string then setting up another width by 12 then again outputing the string
	cout<<setw(23)<<str<<setw(10)<<str<<endl;//Setting up a set width of 23 then outputing the string then setting up another width by 10 then again outputing the string
	cout<<setw(24)<<str<<setw(8)<<str<<endl;//Setting up a set width of 24 then outputing the string then setting up another width by 8 then again outputing the string
	cout<<setw(25)<<str<<setw(6)<<str<<endl;//Setting up a set width of 25 then outputing the string then setting up another width by 6 then again outputing the string
	cout<<setw(26)<<str<<setw(1)<<str<<endl;//Setting up a set width of 26 then outputing the string then setting up another width by 1 then again outputing the string
	cout<<setw(25)<<str<<setw(6)<<str<<endl;//Setting up a set width of 25 then outputing the string then setting up another width by 6 then again outputing the string
	cout<<setw(24)<<str<<setw(8)<<str<<endl;//Setting up a set width of 24 then outputing the string then setting up another width by 8 then again outputing the string
	cout<<setw(23)<<str<<setw(10)<<str<<endl;//Setting up a set width of 23 then outputing the string then setting up another width by 10 then again outputing the string
	cout<<setw(22)<<str<<setw(12)<<str<<endl;//Setting up a set width of 22 then outputing the string then setting up another width by 12 then again outputing the string
	cout<<setw(21)<<str<<setw(14)<<str<<endl;//Setting up a set width of 21 then outputing the string then setting up another width by 14 then again outputing the string
	return 0;
}
