#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	double num1,num2,num3,num4,numf,numf1,numf2;
	//1ST PART
	cout<<"\tPART 1"<<endl;
	cout<<"Please enter number 1: ";
	cin>>num1;
	cout<<"Please enter number 2: ";
	cin>>num2;
	cout<<"Please enter number 3: ";
	cin>>num3;
	numf = num1 > num2 ? num1 : num2;
	numf1 = numf > num3 ? numf : num3;
	cout<<endl;
	cout<<"Largest number is : "<<numf1;
	cout<<endl<<endl;
	//2ND PART
	cout<<"\tPART 2"<<endl;
	cout<<"Please enter number 1: ";
	cin>>num1;
	cout<<"Please enter number 2: ";
	cin>>num2;
	cout<<"Please enter number 3: ";
	cin>>num3;
	cout<<"Please enter number 4: ";
	cin>>num4;
	numf = num1 > num2 ? num1 : num2;
	numf1 = numf > num3 ? numf : num3;
	numf2 = numf1 > num4 ? numf1 : num4;
	cout<<endl;
	cout<<"Largest number is : "<<numf2;
	return 0;
}
