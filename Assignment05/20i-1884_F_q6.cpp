//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
using namespace std;

bool reduce(int & num,int & denom);

int main()
{
	int n=0,d=0;
	cout<<"Numinator = ";
	cin>>n;
	cout<<"Denominator = ";
	cin>>d;
	cout<<endl;
	cout<<"after calling reduce function"<<endl;
	cout<<"Function returned = "<<reduce(n,d)<<endl;
	cout<<"updated value of Numinator will be = "<<n<<endl;
	cout<<"updated value of denominator will be = "<<d<<endl;
}

bool reduce(int & num,int & denom)
{
	int h=1,n=0,d=0,temp=0;
	if(num>0 && denom>0)
    {	
		n=num;
   	 	d=denom;
    	while(d!=0)
    	{
    	  temp=d;
    	  d=n%d;
    	  n=temp;
   		}
   		h=n;
		num=num/h;
		denom=denom/h;
	}
	else if(num>0 && denom<0)
	{
		n=num;
   	 	d=denom*-1;
    	while(d!=0)
    	{
    	  temp=d;
    	  d=n%d;
    	  n=temp;
   		}
   		h=n;
		num=num/h;
		denom=denom/h;
	}
	else if(num<0 && denom>0)
	{
		n=num*-1;
   	 	d=denom;
    	while(d!=0)
    	{
    	  temp=d;
    	  d=n%d;
    	  n=temp;
   		}
   		h=n;
		num=num/h;
		denom=denom/h;
	}
	else if(num<0 && denom<0)
	{
		num=num*-1;
		denom=denom*-1;
		n=num;
   	 	d=denom;
    	while(d!=0)
    	{
    	  temp=d;
    	  d=n%d;
    	  n=temp;
   		}
   		h=n;
		num=num/h;
		denom=denom/h;
		
	}
	else if(denom==0 || num==0)
	{
		return false;
		exit(0);
	}
	return true;
}
