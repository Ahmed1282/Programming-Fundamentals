#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	//Part 1
	cout<<"\tPart1"<<endl;
	char character;
	cout<<"Please enter a Character?"<<endl;
	cin>>character;
	cout<<endl;
	int numChar = (int)character;
    (numChar >= 65 && numChar<=90) ? cout<< "Upper Case (not Lower Case)" : (numChar >= 97 && numChar <= 122) ? cout<<"Lower Case" : cout<<"Not an Alphabet";
    cout<<endl<<endl;
    //Part 2
    cout<<"\tPart2"<<endl;
	char SpecChar;	
	cout<<"Please enter a Special Character?"<<endl;
	cin>>SpecChar;
	cout<<endl;
	int numSpecChar = (int)SpecChar;
	(numSpecChar >= 65 && numSpecChar <= 90 || numSpecChar >= 97 && numSpecChar <= 122 || numSpecChar >= 48 && numSpecChar <= 57) ? cout<<"Not a Special Character" : cout<<"Special Character";
	cout<<endl<<endl;
	//Part 3
	cout<<"\tPart3"<<endl;
	int Year, LeapYear;
	cout<<"Please enter Year?"<<endl;
	cin>>Year;
	LeapYear= Year%4;
	cout<<endl;
	LeapYear == 0 ? cout<<"Leap Year" : cout<<"Not a Leap Year";
	return 0;
}
