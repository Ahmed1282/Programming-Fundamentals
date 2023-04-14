#include<iostream>
using namespace std;

int main()
{
	int m=0;
	cout<<"Enter the number for month: ";
	cin>>m;
	cout<<endl;
	switch(m)
	{
		case 1:
			cout<<"Number of days in this Month are 31";
			break;
		case 2:
			cout<<"Number of days in this Month are 28 and 29 in leap year";
			break;
		case 3:
			cout<<"Number of days in this Month are 31";
			break;
		case 4:
			cout<<"Number of days in this Month are 30";
			break;
		case 5:
			cout<<"Number of days in this Month are 31";
			break;
		case 6:
			cout<<"Number of days in this Month are 30";
			break;
		case 7:
			cout<<"Number of days in this Month are 31";
			break;
		case 8:
			cout<<"Number of days in this Month are 31";
			break;
		case 9:
			cout<<"Number of days in this Month are 30";
			break;
		case 10:
			cout<<"Number of days in this Month are 31";
			break;
		case 11:
			cout<<"Number of days in this Month are 30";
			break;
		case 12:
			cout<<"Number of days in this Month are 31";
			break;
	}
	return 0;
}
