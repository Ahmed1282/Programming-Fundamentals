#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *ptr;
	int temp;
	ptr=arr;
	cout<<"Enter 5 elements of arry"<<endl;
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter element No."<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<endl;
	for(int i=0; i<5; i++) 
	{
		for(int j=i+1; j<5; j++) 
		{
			if(*(ptr + j)<*(ptr + i)) 
			{
				temp=*(ptr + i);
                *(ptr + i)=*(ptr + j);
                *(ptr + j)=temp;
            }
        }
    }
    cout<<"Array after sorting : ";
    cout<<"{ ";
    for(int i=0; i<5; i++)
    {
		cout<<*(ptr + i)<<" , ";
	}
	cout<<" }"<<endl;
	return 0;
}
