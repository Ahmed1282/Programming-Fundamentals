#include<iostream>
using namespace std;
int main()
{
	int* M = new int[10];
	int *p = new int;
	int n,m=0;
	cout<<"Enter the array elements:"<<endl;
	for(int i=0 ; i<10 ; i++)
	{
	cin>>n;
	M[i] = n;
	}
	cout<<"enter the number you want to check:"<<endl;
	cin>>*p;
	for(int i=0 ; i<10 ; i++)
	{
	  if(*p==M[i])
	  m=1;
	  
	}
	 if(m==1)
	  cout<<*p<<" is present in array"<<endl;
	  else
	  cout<<*p<<" is not present in array"<<endl;
    return 0;
    
 }	

