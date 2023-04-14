#include<iostream>
using namespace std;

int main()
{
	int size=10;
	int arr[size];
	cout<<"Enter 10 elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Element "<<i+1<<". : ";
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<endl<<endl;
	cout<<"Unique elements of array: "<<endl;
	for(int i=0; i<size; i++)
	{
		int j;
		for(j=0; j<i; j++)
		if(arr[i] == arr[j])
			break;
		if(i == j)
		cout<<arr[i]<<" , ";
	}
	return 0;
	
}
