#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void func(char str[])
{
	int l, i=0;
	char strT[200];
	
	while(str[i]!='\0')
	{
        i++;
	}
    l = i;
    strT[l] = '\0';
    l--;
    i = 0;
    while(str[i]!='\0')
    {
        strT[l] = str[i];
        i++;
        l--;
    }
    i=0;
    while(strT[i]!='\0')
    {
        str[i] = strT[i];
        i++;
    }
    cout<<"Reverse: "<<str;
}
int main()
{
	char str[200];
    cout<<"Enter the string: ";
    cin>>str;
    func(str);
    
    return 0;
}
