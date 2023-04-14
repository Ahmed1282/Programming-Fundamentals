#include<iostream>
using namespace std;

void perfect(int);

int main()
{
	cout<<"Perfect values between 1 to 1000 are"<<endl;
	cout<<endl;
	for(int i=1; i<=1000; i++)
	{
		perfect(i);
	}
	cout<<endl;
	return 0;
}

void perfect(int n)
{
	int t=0, c=0;
	for(int i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			t=t+i;
		}
	}
	if(t == n)
	{
		cout<<"Perfect number between (1 to 1000) = "<<n<<endl;
	}
}
