#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	string number;
	cout<<"Please enter Number 1: ";
	cin>>num1;
	cout<<"Please enter Number 2: ";
	cin>>num2;
	cout<<endl;
	number= num1>num2 ? "Number 1 > Number 2" : "Number 1 < Number 2"; 
	cout<<number;
	return 0;
}
