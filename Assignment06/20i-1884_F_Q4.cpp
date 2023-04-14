//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

int main()
{
	int s=15, s2=30;
	int arr1[s],arr2[s],arr3[30]; 
	int m, temp=0, x=0;
	
	cout<<"Input Array 1 should be sorted in asecending"<<endl;
	for(int i=0; i<s; i++)
	{
		do
		{
			cout<<"Element "<<i+1<<". :";
			cin>>arr1[i];
			if(arr1[i]>=arr1[i-1])
			{
				arr3[i]=arr1[i];
			}
			else
			{
				cout<<endl;
				cout<<"Invalid Input"<<endl;
				cout<<endl;
			}
		}while(arr1[i]<arr1[i-1]);
	}
	
	m=s;
	cout<<endl;
	cout<<"Input Array 2 should be sorted in asecending"<<endl;
	for(int i=0; i<s; i++)
	{
		do
		{
			cout<<"Element "<<i+1<<". :";
			cin>>arr2[i];
			if(arr2[i]>arr2[i-1])
			{
				arr3[m]=arr2[i];
				m++;
			}
			else
			{
				cout<<endl;
				cout<<"Invalid Input"<<endl;
				cout<<endl;
			}
		}while(arr2[i]<arr2[i-1]);
	}
	
	cout<<endl;
	cout<<"Array 1 = { ";
	for(int i=0; i<s; i++)
	{
		cout<<arr1[i]<<" , ";
	}
	cout<<"}";
	cout<<endl;
	
	cout<<endl;
	cout<<"Array 2 = { ";
	for(int i=0; i<s; i++)
	{
		cout<<arr2[i]<<" , ";
	}
	cout<<"}";
	cout<<endl;
	
	
	for(int i=0; i<m; i++)
	{
		for(int j=i+1; j<m; j++)
		{
			if(arr3[j]<arr3[i])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"New Array 1 = { ";
	for(int i=0; i<s; i++)
	{
		arr1[i]=arr3[i];
	}
	for(int i=0; i<s; i++)
	{
		cout<<arr1[i]<<" , ";
	}
	cout<<"}";
	cout<<endl;
	
	cout<<endl;
	cout<<"New Array 2 = { ";
	for(int i=s; i<m; i++)
	{
		arr2[i]=arr3[i];
	}
	for(int i=s; i<m; i++)
	{
		cout<<arr2[i]<<" , ";
	}
	cout<<"}";
	cout<<endl;
	return 0;
}
