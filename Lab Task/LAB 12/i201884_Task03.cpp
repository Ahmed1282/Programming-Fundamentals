#include<iostream>
using namespace std;

int main()
{
	int size=10;
	int arr1[size];
	int arr2[size];
	cout<<"Enter 10 elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Element "<<i+1<<". : ";
		cin>>arr1[i];
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr1[i]<<" , ";
	}
	cout<<endl<<endl;
	int j=0;
	for(int i=size-1; i>=0; i--)
	{
		arr2[i] = arr1[j];
		j++;
	}
	cout<<endl;
	cout<<"Reverse copied order of array: "<<endl;
	for(int k=0;k<size;k++)
	{
		cout<<arr2[k]<<" , ";
	}
	
	return 0;
}
