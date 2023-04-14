#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *ptrA, *ptrB;
	cout<<"Please enter the value of a: ";
	cin>>a;
	cout<<"Please enter the value of b: ";
	cin>>b;
	ptrA=&a;
	ptrB=&b;
	cout<<endl;
	cout<<"The value of a = "<<*ptrA<<" and its adress = "<<ptrA<<endl;
	cout<<"The value of b = "<<*ptrB<<" and its adress = "<<ptrB<<endl;
	return 0;
}
