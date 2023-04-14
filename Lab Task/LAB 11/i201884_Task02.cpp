#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int flip();

int main()
{
	int h=0,t=0;
	srand(time(0));
	for(int i=1; i<=100; i++)
	{
		cout<<"Toss number "<<i<<" = ";
		if(flip() == 0)
		{
			cout<<"Tail"<<endl;
			t++;
		}
		else 
		{
			cout<<"Head"<<endl;
			h++;
		}
	}
	cout<<endl<<endl;
	cout<<"The total count of Heads = "<<h<<endl;
	cout<<"The total count of Tails = "<<t<<endl;
	return 0;
}

int flip()
{
	if(rand()%2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
