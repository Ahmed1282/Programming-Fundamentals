#include<iostream>
using namespace std;

int main()
{
	char x;
	cout<<"Enter input: ";
	cin>>x;
	cout<<endl;
	switch(x >= 48 && x <= 57) 
	{
		case 0:
			switch(x >= 65 && x <= 90 || x >= 97 && x <= 122)
			{
				case 0:
					cout<<"Input is Special Character"<<endl;
					break;
					
				case 1:
					cout<<"Input is Alphabet"<<endl;
					break;
			}
			break;
		case 1:
			cout<<"Input is Digit"<<endl;
			break;	
	}
 return 0;
}
