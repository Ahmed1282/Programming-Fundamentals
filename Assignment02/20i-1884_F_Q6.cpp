#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	int marksA,marksB;
	cout<<"Please enter the marks obtained in subject A: ";
	cin>>marksA;
	cout<<endl;
	cout<<"Please enter the marks obtained in subject B: ";
	cin>>marksB;
	cout<<endl;
	cout<<"-------------"<<endl;
	if( marksA >= 55 && marksB >= 45)	
	{
		cout<<"Passed";
	}
	else if( marksA<55 && marksB >= 55 &&  marksA>= 45)
	{
		cout<<"Passed";
	}
	else if( marksB < 45 &&  marksA>= 65)
	{
		cout<<"Reappear in B";
	}
	else
	{
		cout<<"   Failed";
	}
	cout<<endl;
	cout<<"-------------"<<endl;
	return 0;
}
