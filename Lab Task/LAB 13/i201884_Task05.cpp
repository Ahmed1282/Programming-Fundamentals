#include <iostream>
using namespace std;

int main()
{
	int r,c;
	int arr[50][50];
	int trans[50][50], i, j;
	cout<<"Please enter the number of rows of Matrix : ";
	cin>>r;
	cout<<"Please enter the number of columns of Matrix : ";
	cin>>c;
	cout<<endl;
	cout<<"Enter Elements of Matrix :"<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"Enter element X"<<i+1<<j+1<<" : ";
			cin>>arr[i][j];
			
		}
	}
	cout<<endl;
	cout<<"Matrix"<<endl<<endl;
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
	for (int i = 0; i<r; ++i)
	{
    	for (int j = 0; j<c; ++j) 
		{
    		trans[j][i] = arr[i][j];
   		}
   	}
	cout<<endl;
   	cout << "Transpose of Matrix: " << endl;
   	cout<<endl;
   	for (int i = 0; i < c; ++i)
    {
		for (int j = 0; j < r; ++j) 
	  	{
        	cout<<" "<<trans[i][j];
        	if (j == r - 1)
        	cout<<endl;
      	}
	}
	return 0;
}
