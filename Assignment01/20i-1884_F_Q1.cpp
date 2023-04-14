#include<iostream>
#include<cmath>// For using power function and sqrt
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	long double i,u,p,Answer; //Declaring double integers
	u=1.234; //Intializing u
	p=3.334; //Intializing p
	cout<<"Please enter the value of 'i' : "; //Asking the user for i
	cin>>i; //Inputting i
	Answer=(sqrt((u)*(pow(i,(3.0/2.0)))*((i*i)-1)))/((sqrt((p*i)-2))+(sqrt((p*i)-1))); //Formula provided
	cout<<"The Answer is: "<<Answer<<endl; // Outputing the answer
	return 0;
	
}
