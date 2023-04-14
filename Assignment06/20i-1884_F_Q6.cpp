//Muhammad Ahmed Baig_20i-1884_Assignment06_Section F
#include<iostream>
using namespace std;

void count(int S,int A[]);
void partition(int S, int A[]);
void next_XOR(int S, int A[]);
void duplicates(int S, int A[]);
void circular(int S, int A[]);
int Search(int S, int A[]);
void shift_circular(int S, int A[]);

int main()
{
	int arr[15];
	int s,n;
	bool pair=false;
	do
	{
		cout<<"Please enter the number of what function you want to perform"<<endl;
		cout<<"1.Occurrence"<<endl;
		cout<<"2.Parition"<<endl;
		cout<<"3.XOR"<<endl;
		cout<<"4.Duplicates"<<endl;
		cout<<"5.Circular"<<endl;
		cout<<"6.Search"<<endl;
		cout<<"7.Shift Circular"<<endl;
		cout<<endl;
		cout<<"Enter Number: ";
		cin>>n;
		if(n<=0 || n>7)
		{
			cout<<endl;
			cout<<"Invalid Output"<<endl;
			cout<<endl;
		}
	}while(n<=0 || n>7);
	do
	{
		cout<<endl;
		cout<<"Please enter the size of array (size <= 15) : ";
		cin>>s;
		if(s <= 15 && s>=0 )
		{
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
		cout<<endl;
		cout<<"Array = ";
		cout<<"{ ";
		for(int i=0; i<s; i++)
		{
			cout<<arr[i]<<" , ";
		}
		cout<<"} "<<endl;
			
	}while(s>15 || s<0 );
	cout<<endl;
	if(n == 1)
	{
		count(s,arr);
	}
	else if(n == 2)
	{
		partition(s, arr);
	}
	else if(n == 3)
	{
		next_XOR(s, arr);
	}
	else if(n == 4)
	{
		duplicates(s, arr);
	}
	else if(n == 5)
	{
		circular(s, arr);
	}
	else if(n == 6)
	{
		cout<<Search(s,arr);void shift_circular(int S, int A[]);
	}
	else if(n == 7)
	{
		shift_circular(s,arr);
	}
	return 0;
}

void count(int S, int A[])
{
	int x, count=0;
	bool check=false;
	cout<<"Please enter integer to check its occurrences : ";
	cin>>x;
	for(int i=0; i<S; i++)
	{
		if(A[i] == x)
		{
			count++;
			check=true;
		}
	}
	if(check == false)
	{
		cout<<endl;
		cout<<"No occurrences of this number "<<endl;
	}
	else if(check == true)
	{
		cout<<endl;
		cout<<"Number of occurrences of this number = "<<count<<endl;
	}
}

void partition(int S, int A[])
{
	int temp=0;
	for(int i=0; i<S; i++)
	{
		for(int j=i+1; j<S; j++)
		{
			if(A[j]<A[i])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"After parition = ";
	cout<<"{ ";
	for(int i=0; i<S; i++)
	{
		cout<<A[i]<<" , ";
	}
	cout<<"} "<<endl;
}

void next_XOR(int S, int A[])
{
	int count=0, sum=0;
	for(int i=0; i<S-2; i++)
	{
		sum=A[i+1]^A[i+2];
		if(A[i] == sum)
		{
			count++;
		}
	}
	cout<<endl;
	cout<<"Answer = "<<count<<endl;
}

void duplicates(int S, int A[])
{
	int count,arr[15];
	for(int i=0; i<S; i++)
	{
		count=0;
		if(arr[i] != A[i])
		{
			for(int j=0; j<S; j++)
			{
				if(A[i]==A[j])
				{
					count++;
					arr[j]=A[j];	
				}	
			}
			cout<<"Frequency of number "<<A[i]<<" = "<<count<<endl;
		}
	}
}

void circular(int S, int A[])
{
	int arr[15], j;
	bool flag=false;
	for(int i=0; i<S; i++)
	{
		arr[i]=0;
	}
	for(int i=0; i<S; i++)
	{
		if(i == S-2)
		{
			flag=true;
            j=i+2;
			arr[i]=A[S-1]+A[0];
		}
		else if(i == S-1)
        {
            flag=true;
            j=i+2;
			arr[i]=A[0]+A[1];
        } 
        if(flag == false)
        {
			j=i;
			while(i == j)
			{
				j=i+2;
				arr[i]=A[i+1]+A[j];
			}
		}
	}
	cout<<"After circulation = ";
	cout<<"{ ";
	for(int i=0; i<S; i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"} "<<endl;
}

int Search(int S, int A[])
{
	int x;
	bool check=false;
	bool end= false;
	cout<<"Enter element to find in a array: ";
	cin>>x;
	cout<<endl;
	for(int i=0; i<S; i++)
	{
		if(A[i] == x)
		{
			if(end == false)
			{
				cout<<"Element found in index: ";
				end = true;
			}
			cout<<i<<" , ";
			check = true;
		}
	}
	if(check == true)
	{
		exit(0);
	}
	if(check == false)
	{
		cout<<"No Element found = ";
		return -1;
	}
}

void shift_circular(int S, int A[])
{
	int n1,n2;
	n1=A[0];
	n2=A[1];
	bool check=false;
	
	for(int i=0; i<S; i++)
	{
		if(i == S-2)
		{
			A[i]=n1;
			check=true;
		}
		if(i == S-1)
		{
			A[i]=n2;
			check=true;
		}	
		if(check==false)
		{
			for(int j=0; j<S; j++)
			{	
				A[i]=A[i+2];
			}
		}
	}
	cout<<endl;
	cout<<"Array after shift circular = ";
	cout<<"{ ";
	for(int i=0; i<S; i++)
	{
		cout<<A[i]<<" , ";
	}
	cout<<"}";
}
