//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

int main()
{
	int r1,c1,r2,c2,l1=0,l2=0;
	int arr1[50][50], arr2[50][50], arr3[50][50];
	cout<<"Please enter the number of rows of Matrix 1: ";
	cin>>r1;
	cout<<"Please enter the number of columns of Matrix 1: ";
	cin>>c1;
	do
	{
		cout<<"Please enter the number of rows of Matrix 2: ";
		cin>>r2;
		if(r2 == c1)
		{
			cout<<"Please enter the number of columns of Matrix 2: ";
			cin>>c2;
			cout<<endl;
			cout<<"Enter Elements of Matrix 1:"<<endl;
			for(int i=0; i<r1; i++)
			{
				for(int j=0; j<c1; j++)
				{
					cout<<"Enter element X"<<i+1<<j+1<<" : ";
					cin>>arr1[i][j];
					
				}
			}
			cout<<endl;
			cout<<"Enter Elements of Matrix 2:"<<endl;
			for(int i=0; i<r2; i++)
			{
				for(int j=0; j<c2; j++)
				{
					cout<<"Enter element Y"<<i+1<<j+1<<" : ";
					cin>>arr2[i][j];
				}
			}
			l1=c1-1;
			cout<<endl;
			cout<<"Matrix 1"<<endl<<endl;
			for(int i=0; i<r1; i++)
			{
				for(int j=0; j<c1; j++)
				{
					cout<<" "<<arr1[i][j];
					if(j == l1)
					{
						cout<<endl;
					}
				}
			}
			l2=c2-1;
			cout<<endl;
			cout<<"Matrix 2"<<endl<<endl;
			for(int i=0; i<r2; i++)
			{
				for(int j=0; j<c2; j++)
				{
					cout<<" "<<arr2[i][j];
					if(j == l2)
					{
						cout<<endl;
					}
				}
			}
		}
		else
		{
			cout<<endl;
			cout<<"Invalid Input Row of Matrix 2 == Column of Matrix 1"<<endl<<endl;
		}
	}while(r2 != c1);
	cout<<endl;
	cout<<"New Matrix: "<<endl<<endl;
  	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
		{
			arr3[i][j]=0;
		}
	}
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
		{
			for(int k=0; k<c1; k++)
			{
				arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
			}
		}
	}
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
		{
			cout<<" "<<arr3[i][j];
			if(j == l2)
			{
				cout<<endl;
			}
		}
	}
	return 0;
}
