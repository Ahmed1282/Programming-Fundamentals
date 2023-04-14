//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
#include<cmath>
#include<bitset>
#include<iomanip>
using namespace std;

int main()
{
	int u,l;
	cout<<"Please enter one of a number from this list (256, 128, 64, 32, 16, 8, 4 or 2) as upper limit: ";
	do
	{
		cin>>u;
		
		if(u == 256 || u == 126 || u == 64 || u == 32 || u == 16 || u == 8 || u == 4 || u == 2)
		{
			cout<<endl;
			cout<<"Enter lower limit: ";
			do
			{
				cin>>l;
				
				if(l>0 && l<u)
				{
					cout<<endl;
					cout<<"Decimal      Binary        Octal      Hexadecimal"<<endl;
					cout<<"-------------------------------------------------"<<endl;
					for(int d=l; d<=u; d++)
					{	
						//DECIMAL
						cout<<setw(2)<<" ";
						if(d<10)
						{
							cout<<std::dec<<"  "<<d;
						}
						else if(d<100)
						{
							cout<<std::dec<<" "<<d;
						}
						else
						{
							cout<<std::dec<<d;
						}
								//BINARY
								cout<<setw(7)<<" ";
								cout<<bitset<9>(d);
								
									//OCTAL
									cout<<setw(8)<<" ";
									cout<<std::oct<<d;
									
										//HEXADECIMAL									
										cout<<setw(10)<<" ";
										if(d<8)
										{
											cout<<std::hex<<"  "<<d;
										}
										else if(d<64)
										{
											cout<<std::hex<<" "<<d;
										}
										else
										{
											cout<<std::hex<<d;
										}
										
						cout<<endl;			
					}		
				}
				else
				{
					cout<<"You should enter the value greater than 0 and less than the upper limit"<<endl;
					cout<<"Enter lower limit: ";
				}
			}while(l<0 || l>u);
		}
		else
		{
			cout<<"You should enter the upper limit from this list only: 256, 128, 64, 32, 16, 8, 4, 2"<<endl;
			cout<<"Please enter the upper limit:";
			cout<<endl;
		}
	}while(u != 256 || u != 126 || u != 64 || u != 32 || u != 16 || u != 8 || u != 4 || u != 2);
	
	return 0;
}
