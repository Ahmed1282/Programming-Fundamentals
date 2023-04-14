//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

void Floor(int sf, int xf, int farr[]);
void Ceil(int sc, int xc, int carr[]);

int main()
{
	int arr[15];
	int s,temp=0,x;
	do
	{
		cout<<"Please enter the size of array (size <= 15) : ";
		cin>>s;
		if(s <= 15 && s>=0 )
		{
			arr[s];
			cout<<endl;
			cout<<"Input Array in Ascending Order"<<endl;
			for(int i=0; i<s; i++)
			{
				do
				{
					cout<<"Element "<<i+1<<". :";
					cin>>arr[i];
					if(arr[i]>=arr[i-1])
					{
						continue;
					}
					else
					{
						cout<<endl;
						cout<<"Invalid Input"<<endl;
						cout<<endl;
					}
				}while(arr[i]<arr[i-1]);
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
	cout<<"Please enter the value of x: ";
	cin>>x;
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
		if(arr[i] == x)
		{
			cout<<"Floor = "<<x<<endl;
			cout<<"Ceil = "<<x<<endl;
			exit(0);	
		}
	}
	Floor(s, x, arr);
	Ceil(s, x, arr);
	return 0;
}

void Floor(int sf, int xf, int farr[])
{
	for(int i=sf-1; i>=0; i--)
	{
		if(farr[i] < xf)	
		{
			cout<<"Floor = "<<farr[i]<<endl;
			break;
		}
		else if(i == 0)
		{
			cout<<"No Floor exist"<<endl;
		}
	}
}

void Ceil(int sc, int xc, int carr[])
{
	for(int i=0; i<sc; i++)
	{
		if(carr[i] > xc)
		{
			cout<<"Ceil = "<<carr[i]<<endl;
			break;
		}
		else if(i == sc-1)
		{
			cout<<"No Ceil exist"<<endl;
		}
	}
}

	

