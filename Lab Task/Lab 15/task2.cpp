#include <iostream>
using namespace std;

int main()
{
       int* A = new int(20);
	int x,p=0,n=0,e=0,o=0;
	cout<<"Enter the elements:"<<endl;
	for(int i=0 ; i<20 ; i++)
	{
	cin>>x;
	*(A+i) = x;
	}
	
	for(int i=0 ; i<20 ; i++)
	{
	if (*(A+i) >= 0)
        p++;
        else 
        n++;
	}
	
	for(int i=0 ; i<20 ; i++)
	{
	if(*(A+i)%2==0)
	e++;
	else
	o++;
	}
	
	cout<<"number of positive numbers are : "<<p<<endl; 
	cout<<"number of negative numbers are : "<<n<<endl; 
	cout<<"number of odd numbers are : "<<o<<endl; 
	cout<<"number of even numbers are : "<<e<<endl; 
	return 0;
}
