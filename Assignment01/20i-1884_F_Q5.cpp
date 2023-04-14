#include<iostream>
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	int inches,yards,ft,rinches_yards,rinches_ft; //Declaring integers
	cout<<"Enter the number of inches : "; //Asking the user to enter number of inches
	cin>>inches; //Inputting inches
	yards=inches/36; // Formula to calculate number of yards
	rinches_yards=inches%36; //Remainding inches after yards are calculated
	ft=rinches_yards/12; //Formula to calculate feet
	rinches_ft=rinches_yards%12; //Remainding inches after feet are calculated
	cout<<yards<<" yards  "<<ft<<" ft  "<<rinches_ft<<" inches"<<endl; //Outputing yards feet and inches
	return 0;
	
}
