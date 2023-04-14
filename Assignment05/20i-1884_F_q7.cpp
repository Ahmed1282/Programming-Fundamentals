//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
#include<iomanip>
using namespace std;

int addition(int n1,int n2);
int subtraction(int n1,int n2);
int multiplication(int n1,int n2);
int division(int num,int denom);
int remainder(int num,int denom);
int absolute(int num); 

int main()
{
	int num1,num2,op;
	do 
	{
		cout<<setw(14)<<" ";
		cout<<"Enter desired Operator`s number"<<endl;
		cout<<"\n\t\t | 1. + (Addition)       |\n\t\t | 2. - (Subtraction)    |\n\t\t | 3. * (Multiplication) |\n\t\t | 4. / (Division)       |\n\t\t | 5. % (Remainder)      |\n\t\t | 6. ~ (Absolute)       |"<<endl;
		cout<<endl;
		cout<<"Operator`s number: ";
		cin>>op;
		cout<<endl;
		if(op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 6)
		{
			switch(op)
			{
				case 1:
				{
					cout<<"\tAddition ( + )"<<endl;
					cout<<endl;
					cout<<"Enter the first number: ";
					cin>>num1;
					cout<<"Enter the second number: ";
					cin>>num2;
					cout<<endl;
					cout<<"("<<num1<<")"<<" + "<<"("<<num2<<")"<<endl;
					cout<<endl;
					cout<<"Answer = "<<addition(num1,num2);
					break;
				}
				case 2:
				{
					cout<<"\tSubtraction ( - ) "<<endl;
					cout<<endl;
					cout<<"Enter the first number: ";
					cin>>num1;
					cout<<"Enter the second number: ";
					cin>>num2;
					cout<<endl;
					cout<<"("<<num1<<")"<<" - "<<"("<<num2<<")"<<endl;
					cout<<endl;
					cout<<"Answer = "<<subtraction(num1,num2);
					break;
				}
				case 3:
				{
					cout<<"\tMultiplication ( * )"<<endl;
					cout<<endl;
					cout<<"Enter the first number: ";
					cin>>num1;
					cout<<"Enter the second number: ";
					cin>>num2;
					cout<<endl;
					cout<<"("<<num1<<")"<<" * "<<"("<<num2<<")"<<endl;
					cout<<endl;
					cout<<"Answer = "<<multiplication(num1,num2);
					break;
				}
				case 4:
				{
					cout<<"\tDivision ( / ) "<<endl;
					cout<<endl;
					cout<<"Enter the numerator: ";
					cin>>num1;
					cout<<"Enter the denominator: ";
					cin>>num2;
					cout<<endl;
					cout<<"("<<num1<<")"<<" / "<<"("<<num2<<")"<<endl;
					cout<<endl;
					cout<<"Answer = "<<division(num1,num2);
					break;
				}
				case 5:
				{
					cout<<"\tRemainder ( % )"<<endl;
					cout<<endl;
					cout<<"Enter Positive Values"<<endl;
					cout<<endl;
					do
					{
						cout<<"Enter the numerator: ";
						cin>>num1;
						if(num1>0)
						{
							do
							{
								cout<<"Enter the denominator: ";
								cin>>num2;
								if(num2>0)
								{
									cout<<endl;
									cout<<"("<<num1<<")"<<" % "<<"("<<num2<<")"<<endl;
									cout<<endl;
									cout<<"Answer = "<<remainder(num1,num2);
								}
								else
								{
									cout<<endl;
									cout<<"Invalid Input (denominator>0)"<<endl;
									cout<<endl;
								}
							}while(num2<=0);
						}
						else
						{
							cout<<endl;
							cout<<"Invalid Input (numerator>0)"<<endl;
							cout<<endl;
						}
					}while(num1<=0);
					break;
				}
				case 6:
				{
					cout<<"\tAbsolute ( ~ )"<<endl;
					cout<<endl;
					cout<<"Enter the number: ";
					cin>>num1;
					cout<<endl;
					cout<<num1<<" ~ "<<endl;
					cout<<endl;
					cout<<"Answer = "<<absolute(num1);
					break;
				}
			}
			break;
		}
		else
		{
			cout<<endl;
			cout<<"Invalid Input"<<endl;
			cout<<endl;
		}
	}while(op != 1 || op != 2 || op != 3 || op != 4 || op != 5 || op != 6);
	return 0;
}

int addition(int n1,int n2)
{
	if(n2>0)
	{
		while(n2 != 0)
		{
			n1++;
			n2--;
		}
	}
	else if(n2<0)
	{
		while(n2 != 0)
		{
			n1--;
			n2++;
		}
	}
	return n1;
}

int subtraction(int n1,int n2)
{
	int ans=0;
	if(n1>0 && n2>0)
	{
		if(n2>n1)
		{
			while(n2 != n1)
			{
				n2--;
				ans--;
			}	
		}
		else if(n1>n2)
		{
			while(n1 != n2)
			{
				n1--;
				ans++;
			}
		}
	}
	else if(n1<0 && n2>0)
	{
		while(n2 != n1)
		{
			n2--;
			ans--;
		}	
	}
	else if(n1>0 && n2<0)
	{
		while(n1 != n2)
		{
			n1--;
			ans++;
		}
	}
	else if(n1<0 && n2<0)
	{
		if(n2>n1)
		{
			while(n2 != n1)
			{
				n2--;
				ans--;
			}	
		}
		else if(n1>n2)
		{
			while(n1 != n2)
			{
				n1--;
				ans++;
			}
		}
	}
	else if(n2 != 0 && n1 == 0)
	{
		if(n2>0)
		{
			while(n2 != n1)
			{
				n2--;
				ans--;
			}
		}
		else if(n2<0)
		{
			while(n2 != n1)
			{
				n2++;
				ans++;
			}
		}
	}
	else if(n2 == 0 && n1 != 0)
	{
		return n1;
		exit(0);
	}
	return ans;
}

int multiplication(int n1,int n2)
{
	int p=0,c1=0,c2=0;
	if((n1>0 && n2>0) || (n1==0) || (n2==0))
	{	for(int i=1; i<=n2; i++)
		{
			for(int j=1; j<=n1; j++)
			{
				p++;
			}
		}
	}
	else if(n1<0 && n2>0)
	{
		for(int i=1; i<=n2; i++)
		{
			p=addition(p,n1);
		}
	}
	else if(n1>0 && n2<0)
	{
		for(int i=1; i<=n1; i++)
		{
			p=addition(p,n2);
		}
	}
	else if(n1<0 && n2<0)
	{
		while(n1 != 0)
		{
			c1++;
			n1++;
		}
		while(n2 != 0)
		{
			c2++;
			n2++;
		}
		for(int i=1; i<=c2; i++)
		{
			p=addition(p,c1);
		}	
	}
	return p;
}

int division(int num,int denom)
{
	int add=0,d=0,p=0,n=0,add2=0;
	if((num>0 && denom>0) || (num == denom))
	{
		add=denom;
		while(add <= num)
		{
			add=addition(add,denom);
			d++;
		}
	}
	else if(num>0 && denom<0) 
	{
		while(denom != 0)
		{
			p++;
			denom++;
		}
		add=p;
		while(add <= num)
		{
			add=addition(add,p);
			n++;
		}
		while(n != 0)
		{
			n--;
			d--;
		}	
	}
	else if(num<0 && denom>0)
	{
		while(num != 0)
		{
			p++;
			num++;
		}
		add2=p;
		add=denom;
		while(add <= add2)
		{
			add=addition(add,denom);
			n++;
		}
		while(n != 0)
		{
			n--;
			d--;
		}	
	}
	else if(num<0 && denom<0)
	{
		while(denom != 0)
		{
			p++;
			denom++;
		}
		add=p;
		while(num != 0)
		{
			n++;
			num++;
		}
		add2=n;
		while(add <= add2)
		{
			add=addition(add,p);
			d++;
		}	
	}		
	else if((num<denom) || (num == 0))
	{
		add=denom;
		while(add <= num)
		{
			add=addition(add,denom);
			d++;
		}
	}
	else if(denom == 0)
	{
		cout<<"Error"<<endl;
		exit(0);
	}
	return d;
}

int remainder(int num,int denom)
{
	int d=0,m=0,r=0;
	if(num>denom)
	{
		d=division(num,denom);
		m=multiplication(d,denom);
		r=subtraction(num,m);	
	}
	else if(denom>num)
	{
		r=num;
	}
	return r;
}

int absolute(int num)
{
	int a=0;
	if(num>0 || num == 0)
	{
		a=num;
	}
	else if(num<0)
	{
		while(num != 0)
		{
			a++;
			num++;
		}	
	}
	return a;
}
