//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

int main()
{
	int arr[10][10];
	int r,c,x,l,count=0,c1;
	bool end=false;
	do
	{
		cout<<"Please enter the number of rows of matrix (NOT MORE THAN 10)"<<endl;
		cin>>r;
		if(r<=10 && r>=0)
		{
			do
			{
				cout<<"Please enter the number of columns of matrix (NOT MORE THAN 10)"<<endl;
				cin>>c;
				if((c<=10 && c>=0 ))
				{
					cout<<endl;
					cout<<"Enter Matrix["<<r<<"]["<<c<<"]"<<endl;
					cout<<endl;
					for(int i=0; i<r; i++)
					{
						for(int j=0; j<c; j++)
						{
							do
							{
								cout<<"Enter element M"<<i+1<<j+1<<" : ";
								cin>>arr[i][j];
								if(arr[i][j] == 0 || arr[i][j] == 1)
								{
									continue;
								}
								else 
								{
									cout<<endl;
									cout<<"Invalid Input"<<endl;
									cout<<endl;
								}
							}while(arr[i][j] != 0 && arr[i][j] != 1);
							
						}
					}
				}
				else
				{	
					cout<<endl;
					cout<<"Invalid Input"<<endl;
					cout<<endl;
				}
			}while(c>10 || c<0);
		}
		else
		{
			cout<<endl;
			cout<<"Invalid Input"<<endl;
			cout<<endl;
		}
	}while(r>10 || r<0 );
	cout<<endl;
	cout<<"Matrix M"<<endl<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<" "<<arr[i][j];
			if(j == c-1)
			{
				cout<<endl;
			}
		}
	}
	for(int i=0; i<r; i++)
	{
		count=0;
		for(int j=0; j<c; j++)
		{
			if(arr[i][j] == 1)
			{
				count++;
				c1=count;	
			}		
		}
		if(end == false)
		{
			l=c1;
			end=true;
		}
		if(c1>l)
		{
			c1=l;
			x=i;
		}
	}
	cout<<endl;
	cout<<"Row Number with maximum 1 is = "<<x;
	return 0;
}
