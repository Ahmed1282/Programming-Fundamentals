#include<iostream>
using namespace std;

int main()
{
	int size=10, temp=0;
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
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Array in asending order : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" , ";
	}
	return 0;
}
