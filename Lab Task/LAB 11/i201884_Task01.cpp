#include<iostream>
using namespace std;

int tripleCallByValue(int);
void tripleCallByRef(int &);

int main()
{
	int c=3;
	int &r=c;
	cout<<"Before calling the function tripleCallByValue the value = "<<c<<endl;
	cout<<"After calling the function tripleCallByValue the value = "<< tripleCallByValue(c)<<endl;
	cout<<"Before calling the function tripleCallByRef the value = "<<c<<endl;
	tripleCallByRef(r);
	cout<<"After calling the function tripleCallByRef the value = "<<c<<endl;
	return 0;
}

int tripleCallByValue(int cc)
{
	return cc*3;
}

void tripleCallByRef(int &rf)
{
	rf=rf*3;
}
