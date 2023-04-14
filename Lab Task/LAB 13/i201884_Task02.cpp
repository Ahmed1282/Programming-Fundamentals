#include <iostream>
#include <cstring>
using namespace std;

void vowels(char str[100])
{
	int sum=0;
	for (int i=0; str[i]!='\0'; i++)
	{
		if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'  )
		sum++;
	}
	cout<<endl;
	cout<<"Total vowels =  "<<sum<<endl;
		
}

int main()
{	
	char str[100];
	cout<<"Enter String : ";
	cin.get(str,100);
	int size= sizeof(str)/sizeof(str[0]);
	vowels(str);	
	return 0;
}
