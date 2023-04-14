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
	int sum=12, count=0;
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]+arr[j] == 12)
			{
				cout<<arr[i]<<" , "<<arr[j]<<endl;
				count++;
			}
		}
	}
	cout<<endl;
	cout<<"Number of pairs with sum = 12: "<<count<<endl;
    return 0;
}
