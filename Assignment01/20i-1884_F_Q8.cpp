#include<iostream>
#include<iomanip>// To use setw and draw
#include<string> // For using string
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	string str;//Declaring string
	cout<<"Please enter a string: "<<endl;//Asking user to enter string
	cin>>str;//Inputting string
	cout<<setw(21)<<str<<"\n"<<setw(23)<<str<<"\n"<<setw(25)<<str<<"\n"<<setw(27)<<str<<"\n"<<setw(29)<<str<<"\n"<<setw(2)<<str<<setw(3)<<str<<setw(2)<<str<<setw(2)<<str<<setw(2)<<str<<setw(2)<<str<<setw(3)<<str<<setw(2)<<str<<setw(2)<<str<<setw(2)<<str<<"\n"<<setw(29)<<str<<"\n"<<setw(27)<<str<<"\n"<<setw(25)<<str<<"\n"<<setw(23)<<str<<"\n"<<setw(21)<<str<<"\n";
	return 0;
}
