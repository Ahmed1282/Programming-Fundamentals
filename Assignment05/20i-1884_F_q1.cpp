//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
using namespace std;

double evaluatePolynomial();

int main()
{
	cout<<"output: "<<evaluatePolynomial();
	cout<<endl;
	return 0;
}

double evaluatePolynomial()
{
	int p,Temp=0;
	double x, n, pow, ans=0;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the highest power p: ";
	cin>>p;
	if(p>=0)
	{	
		Temp=p;
		cout<<"Enter "<<p+1<<" coefficients in descending order of power"<<endl;
		for(int i=1; i<=p+1; i++)
		{
			cin>>n;
			pow=1;
			for(int j=0; j<Temp; j++)
			{
				pow=pow*x;
			}
			Temp--;
			ans=(pow*n)+ans;
		}
		return ans;
	}
	else
	{
		cout<<"output: Error (power must be >=0)";
		exit(0);
	}
}
