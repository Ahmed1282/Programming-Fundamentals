//Muhammad Ahmed Baig_20i-1884_Assignment05_Section F
#include<iostream>
#include<iomanip>
using namespace std;

void barChart(int N1, int N2, int N3, int N4, int N5)
{
	int l=0;
	if(N1>l)
	{
		l=N1;
	}
	if(N2>l)
	{
		l=N2;
	}
	if(N3>l)
	{
		l=N3;
	}
	if(N3>l)
	{
		l=N3;
	}
	if(N4>l)
	{
		l=N4;
	}
	if(N5>l)
	{
		l=N5;
	}
	cout<<endl;
	for(int i=l; i<l*2; i++)
	{
		
		if(((l*2)-i)<10)
		{
			cout<<setw(5);
			cout<<"0"<<(l*2)-i<<" ";
		}
		else
		{
			cout<<setw(6);
			cout<<(l*2)-i<<" ";
		}
		if(N1>=((l*2)-i))
		{
		 	cout<<" * ";
		}
		else 
		{
			cout<<"   ";
		}
		if(N2>=((l*2)-i))
		{
		 	cout<<" * ";
		}
		else
		{
			cout<<"   ";
		}
		if(N3>=((l*2)-i))
		{
		 	cout<<" * ";
		}
		else
		{
			cout<<"   ";
		}
		if(N4>=((l*2)-i))
		{
		 	cout<<" * ";
		}
		else
		{
			cout<<"   ";
		}
		if(N5>=((l*2)-i))
		{
		 	cout<<" * ";
		}
		else
		{
			cout<<"   ";
		}
		cout<<endl;
	}
	cout<<setw(8);
	for(int j=1; j<=5; j++)
	{
		cout<<"  "<<j;
	}
}

int main()
{
	int n1,n2,n3,n4,n5;
	do 
	{	
		cout<<"Enter number N1 => ";
		cin>>n1;
		if(n1>=0)
		{
			do 
			{	
				cout<<"Enter number N2 => ";
				cin>>n2;
				if(n2>=0)
				{
					do 
					{	
						cout<<"Enter number N3 => ";
						cin>>n3;
						if(n3>=0)
						{
							do 
							{	
								cout<<"Enter number N4 => ";
								cin>>n4;
								if(n4>=0)
								{
									do 
									{	
										cout<<"Enter number N5 => ";
										cin>>n5;
										if(n5>=0)
										{
											barChart(n1, n2, n3, n4, n5);
										}
										else
										{
											cout<<"Invalid Input (n5 >= 0)"<<endl<<endl;
										}
									}while(n5<0);
								}
								else
								{
									cout<<"Invalid Input (n4 >= 0)"<<endl<<endl;
								}
							}while(n4<0);
						}
						else
						{
							cout<<"Invalid Input (n3 >= 0)"<<endl<<endl;
						}	
					}while(n3<0);
				}
				else
				{
					cout<<"Invalid Input (n2 >= 0)"<<endl<<endl;
				}
			}while(n2<0);
		}
		else
		{
			cout<<"Invalid Input (n1 >= 0)"<<endl<<endl;
		}
	}while(n1<0);
	return 0;
}
