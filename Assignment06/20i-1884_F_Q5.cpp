//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

int main()
{
	int arr[15];
	int s,n,temp=0;
	bool pair=false;
	do
	{
		cout<<"Please enter the size of array (size <= 15) : ";
		cin>>s;
		if(s <= 15 && s>=0 )
		{
			arr[s];
			cout<<endl;
			cout<<"Input Array"<<endl;
			for(int i=0; i<s; i++)
			{
				cout<<"Element "<<i+1<<". :";
				cin>>arr[i];	
			}
		}
		else
		{
			cout<<endl;
			cout<<"Invlaid Input"<<endl;
			cout<<endl;
		}
	}while(s>15 || s<0 );
	cout<<endl;
	cout<<"Please enter the value of n: ";
	cin>>n;
	cout<<endl;
	cout<<"Array: { ";
	for(int i=0; i<s; i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"} "<<endl;
	cout<<endl;
	for(int i=0; i<s; i++)
	{
		for(int j=i+1; j<s; j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0; i<s; i++)
	{
		for(int j=i+1; j<s; j++)
		{
			if(n == arr[j]-arr[i])
			{
				cout<<"Pair Found: { "<<arr[i]<<" , "<<arr[j]<<" }"<<endl;
				pair=true;
			}
		}
	}
	if(pair == false)
	{
		cout<<"No Pair Found"<<endl;
	}
	return 0;
}
