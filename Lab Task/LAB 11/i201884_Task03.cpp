#include<iostream>
using namespace std;

float divide(float a1, float b1=2);

int main()
{
	float a, b;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	cout<<endl;
	cout<<"Result with 1 argument = "<<divide(a)<<endl;
	cout<<"Result with 2 argument = "<<divide(a,b)<<endl;
	return 0;
}

float divide(float a1, float b1)
{
	float result=a1/b1;
}
