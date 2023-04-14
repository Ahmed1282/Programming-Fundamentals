#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *ptr;
	ptr=arr;
	cout<<"Enter 5 elements of arry"<<endl;
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter element No."<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<endl;
	cout<<"Array in Reverse = ";
	for(int i=4; i>=0; i--)
	{
		cout<<*(ptr+i)<<" ";
	}
	return 0;
}
