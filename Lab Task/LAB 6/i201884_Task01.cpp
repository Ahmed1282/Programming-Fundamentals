#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"Please enter Number 1: ";
	cin>>x;
	cout<<"Please enter Number 2: ";
	cin>>y;
	cout<<endl;
	switch(x>=y)
	{
		case 0:
		switch(x<y)
		{
			case 0:
			cout<<"Number 1 > Number 2";
			break;
			
			case 1:
			cout<<"Number 1 < Number 2";
			break;	
		}
		break;
		
		default:
			cout<<"Number 1 = Number 2";
		break;
	}
return 0;
}
