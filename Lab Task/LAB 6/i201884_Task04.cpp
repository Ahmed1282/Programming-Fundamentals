#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x,y;
	char op;
	cout<<"Enter Number 1 : ";
	cin>>x;
	cout<<"Enter Number 2 : ";
	cin>>y;
	cout<<"Enter Operator (+,-,*,/,%) : ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<x<<" + "<<y<<" = "<<x+y<<endl;
			break;
		
		case '-':	
			cout<<x<<" - "<<y<<" = "<<x-y<<endl;
			break;
		
		case '*':
			cout<<x<<" * "<<y<<" = "<<x*y<<endl;
			break;
			
		case '/':
			if(y != 0)
			{
				cout<<x<<" / "<<y<<" = "<<x/y<<endl;
			}
			else 
			{
				cout<<"denominator must not be zero answer is infinity"<<endl;
			}
			break;
			
		case '%':
			if(y != 0)
			{
				cout<<x<<" % "<<y<<" = "<<x%y<<endl;
			}
			else 
			{
				cout<<"denominator must not be zero answer is infinity"<<endl;
			}
			break;
			
		default:
			cout<<"Invalid input";
			break;
	}
	return 0;
}
