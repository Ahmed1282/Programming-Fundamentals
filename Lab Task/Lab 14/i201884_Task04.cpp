#include<iostream>
using namespace std;

int main()
{
	char arr[100];
	char *ptr;
	int c=0;
	cout<<"Enter a string (without spacing) : ";
	cin>>arr;
	ptr=arr;
	while(*ptr != '\0')
	{
		c++;
		ptr++;
	}
	cout<<endl;
	cout<<"Length of the string = "<<c<<endl;
	return 0;
	
}
