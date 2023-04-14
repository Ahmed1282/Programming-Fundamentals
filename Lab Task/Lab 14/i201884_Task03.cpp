#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *ptr;
	int l,s;
	ptr=arr;
	cout<<"Enter 5 elements of arry"<<endl;
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter element No."<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	l=arr[0];
	for(int i=0; i<5; i++)
	{
		if(l<*(ptr+i))
		{
			l=*(ptr+i);
		}
	}
	s=arr[0];
	for(int i=0; i<5; i++)
	{
		if(s>*(ptr+i))
		{
			s=*(ptr+i);
		}
	}
	cout<<endl;
	cout<<"Smallest element = "<<s<<endl;
	cout<<"Largest element = "<<l<<endl;
	return 0;
}
