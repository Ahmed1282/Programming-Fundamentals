#include<iostream>
using namespace std;

int main()
{
	char arr[100];
	char *ptr;
	int v=0,c=0;
	cout<<"Enter a string (without spacing) : ";
	cin>>arr;
	ptr=arr;
	while(*ptr != '\0')
	{
		if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
		{
			v++;
		}
		else
		{
			c++;
		}
		ptr++;
	}
	cout<<endl;
    cout<<"Vowels in String = "<<v<<endl;
    cout<<"Consonants in String = "<<c<<endl;
    return 0;
}
