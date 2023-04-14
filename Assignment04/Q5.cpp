//Muhammad Ahmed Baig_20i-1884_Assignment 4
#include<iostream>
using namespace std;

int main()
{
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,total=0;
	for(int i=0; i<24; i++)
	{
		cout<<"A";
		if(i<6)
		{
			cout<<"B";
				if(i<2)
				{
					cout<<"C";
						if(i<1)
						{
							cout<<"DE";
						}
						else if(i>=1 && i<2)
						{
							cout<<"ED";
						}
				}
				else if(i>=2 && i<4)
				{
					cout<<"D";
						if(i<3)
						{
							cout<<"CE";
						}
						else if(i>=3 && i<4)
						{
							cout<<"EC";
						}
				}
				else if(i>=4 && i<6)
				{
					cout<<"E";
						if(i<5)
						{
							cout<<"CD";
						}
						else if(i>=5 && i<6)
						{
							cout<<"DC";
						}
				}
			cout<<endl;
		}
		else if(i>=6 && i<12)
		{
			cout<<"C";
				if(i>=6 && i<8)
				{
					cout<<"B";
						if(i<7)
						{
							cout<<"DE";
						}
						else if(i>=7 && i<8)
						{
							cout<<"ED";
						}
				}
				else if(i>=8 && i<10)
				{
					cout<<"D";
						if(i<9)
						{
							cout<<"BE";
						}
						else if(i>=9 && i<10)
						{
							cout<<"EB";
						}
				}
				else if(i>=10 && i<12)
				{
					cout<<"E";
						if(i<11)
						{
							cout<<"BD";
						}
						else if(i>=11 && i<12)
						{
							cout<<"DB";
						}
				}
			cout<<endl;
		}
		else if(i>=12 && i<18)
		{
			cout<<"D";
				if(i>=12 && i<14)
				{
					cout<<"B";
						if(i<13)
						{
							cout<<"CE";
						}
						else if(i>=13 && i<14)
						{
							cout<<"EC";
						}
				}
				else if(i>=14 && i<16)
				{
					cout<<"C";
						if(i<15)
						{
							cout<<"BE";
						}
						else if(i>=15 && i<16)
						{
							cout<<"EB";
						}
				}
				else if(i>=16 && i<18)
				{
					cout<<"E";
						if(i<17)
						{
							cout<<"BC";
						}
						else if(i>=17 && i<18)
						{
							cout<<"CB";
						}
				}	
			cout<<endl;
		}
		else if(i>=18 && i<24)
		{
			cout<<"E";
				if(i>=18 && i<20)
				{
					cout<<"B";
						if(i<19)
						{
							cout<<"CD";
						}
						else if(i>=19 && i<20)
						{
							cout<<"DC";
						}
				}
				else if(i>=20 && i<22)
				{
					cout<<"C";
						if(i<21)
						{
							cout<<"BD";
						}
						else if(i>=21 && i<22)
						{
							cout<<"DB";
						}
				}
				else if(i>=22 && i<24)
				{
					cout<<"D";
						if(i<23)
						{
							cout<<"BC";
						}
						else if(i>=23 && i<24)
						{
							cout<<"CB";
						}
				}
			cout<<endl;
		}
		sum1++;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<24; i++)
	{
		cout<<"B";
		if(i<6)
		{
			cout<<"A";
				if(i<2)
				{
					cout<<"C";
						if(i<1)
						{
							cout<<"DE";
						}
						else if(i>=1 && i<2)
						{
							cout<<"ED";
						}
				}
				else if(i>=2 && i<4)
				{
					cout<<"D";
						if(i<3)
						{
							cout<<"CE";
						}
						else if(i>=3 && i<4)
						{
							cout<<"EC";
						}
				}
				else if(i>=4 && i<6)
				{
					cout<<"E";
						if(i<5)
						{
							cout<<"CD";
						}
						else if(i>=5 && i<6)
						{
							cout<<"DC";
						}
				}
			cout<<endl;
		}
		else if(i>=6 && i<12)
		{
			cout<<"C";
				if(i>=6 && i<8)
				{
					cout<<"A";
						if(i<7)
						{
							cout<<"DE";
						}
						else if(i>=7 && i<8)
						{
							cout<<"ED";
						}
				}
				else if(i>=8 && i<10)
				{
					cout<<"D";
						if(i<9)
						{
							cout<<"AE";
						}
						else if(i>=9 && i<10)
						{
							cout<<"EA";
						}
				}
				else if(i>=10 && i<12)
				{
					cout<<"E";
						if(i<11)
						{
							cout<<"AD";
						}
						else if(i>=11 && i<12)
						{
							cout<<"DA";
						}
				}
			cout<<endl;
		}
		else if(i>=12 && i<18)
		{
			cout<<"D";
				if(i>=12 && i<14)
				{
					cout<<"A";
						if(i<13)
						{
							cout<<"CE";
						}
						else if(i>=13 && i<14)
						{
							cout<<"EC";
						}
				}
				else if(i>=14 && i<16)
				{
					cout<<"C";
						if(i<15)
						{
							cout<<"AE";
						}
						else if(i>=15 && i<16)
						{
							cout<<"EA";
						}
				}
				else if(i>=16 && i<18)
				{
					cout<<"E";
						if(i<17)
						{
							cout<<"AC";
						}
						else if(i>=17 && i<18)
						{
							cout<<"CA";
						}
				}	
			cout<<endl;
		}
		else if(i>=18 && i<24)
		{
			cout<<"E";
				if(i>=18 && i<20)
				{
					cout<<"A";
						if(i<19)
						{
							cout<<"CD";
						}
						else if(i>=19 && i<20)
						{
							cout<<"DC";
						}
				}
				else if(i>=20 && i<22)
				{
					cout<<"C";
						if(i<21)
						{
							cout<<"AD";
						}
						else if(i>=21 && i<22)
						{
							cout<<"DA";
						}
				}
				else if(i>=22 && i<24)
				{
					cout<<"D";
						if(i<23)
						{
							cout<<"AC";
						}
						else if(i>=23 && i<24)
						{
							cout<<"CA";
						}
				}
			cout<<endl;
		}
		sum2++;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<24; i++)
	{
		cout<<"C";
		if(i<6)
		{
			cout<<"A";
				if(i<2)
				{
					cout<<"B";
						if(i<1)
						{
							cout<<"DE";
						}
						else if(i>=1 && i<2)
						{
							cout<<"ED";
						}
				}
				else if(i>=2 && i<4)
				{
					cout<<"D";
						if(i<3)
						{
							cout<<"BE";
						}
						else if(i>=3 && i<4)
						{
							cout<<"EB";
						}
				}
				else if(i>=4 && i<6)
				{
					cout<<"E";
						if(i<5)
						{
							cout<<"BD";
						}
						else if(i>=5 && i<6)
						{
							cout<<"DB";
						}
				}
			cout<<endl;
		}
		else if(i>=6 && i<12)
		{
			cout<<"B";
				if(i>=6 && i<8)
				{
					cout<<"A";
						if(i<7)
						{
							cout<<"DE";
						}
						else if(i>=7 && i<8)
						{
							cout<<"ED";
						}
				}
				else if(i>=8 && i<10)
				{
					cout<<"D";
						if(i<9)
						{
							cout<<"AE";
						}
						else if(i>=9 && i<10)
						{
							cout<<"EA";
						}
				}
				else if(i>=10 && i<12)
				{
					cout<<"E";
						if(i<11)
						{
							cout<<"AD";
						}
						else if(i>=11 && i<12)
						{
							cout<<"DA";
						}
				}
			cout<<endl;
		}
		else if(i>=12 && i<18)
		{
			cout<<"D";
				if(i>=12 && i<14)
				{
					cout<<"A";
						if(i<13)
						{
							cout<<"BE";
						}
						else if(i>=13 && i<14)
						{
							cout<<"EB";
						}
				}
				else if(i>=14 && i<16)
				{
					cout<<"B";
						if(i<15)
						{
							cout<<"AE";
						}
						else if(i>=15 && i<16)
						{
							cout<<"EA";
						}
				}
				else if(i>=16 && i<18)
				{
					cout<<"E";
						if(i<17)
						{
							cout<<"AB";
						}
						else if(i>=17 && i<18)
						{
							cout<<"BA";
						}
				}	
			cout<<endl;
		}
		else if(i>=18 && i<24)
		{
			cout<<"E";
				if(i>=18 && i<20)
				{
					cout<<"A";
						if(i<19)
						{
							cout<<"BD";
						}
						else if(i>=19 && i<20)
						{
							cout<<"DB";
						}
				}
				else if(i>=20 && i<22)
				{
					cout<<"B";
						if(i<21)
						{
							cout<<"AD";
						}
						else if(i>=21 && i<22)
						{
							cout<<"DA";
						}
				}
				else if(i>=22 && i<24)
				{
					cout<<"D";
						if(i<23)
						{
							cout<<"AB";
						}
						else if(i>=23 && i<24)
						{
							cout<<"BA";
						}
				}
			cout<<endl;
		}
		sum3++;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<24; i++)
	{
		cout<<"D";
		if(i<6)
		{
			cout<<"A";
				if(i<2)
				{
					cout<<"B";
						if(i<1)
						{
							cout<<"CE";
						}
						else if(i>=1 && i<2)
						{
							cout<<"EC";
						}
				}
				else if(i>=2 && i<4)
				{
					cout<<"C";
						if(i<3)
						{
							cout<<"BE";
						}
						else if(i>=3 && i<4)
						{
							cout<<"EB";
						}
				}
				else if(i>=4 && i<6)
				{
					cout<<"E";
						if(i<5)
						{
							cout<<"BC";
						}
						else if(i>=5 && i<6)
						{
							cout<<"CB";
						}
				}
			cout<<endl;
		}
		else if(i>=6 && i<12)
		{
			cout<<"B";
				if(i>=6 && i<8)
				{
					cout<<"A";
						if(i<7)
						{
							cout<<"CE";
						}
						else if(i>=7 && i<8)
						{
							cout<<"EC";
						}
				}
				else if(i>=8 && i<10)
				{
					cout<<"C";
						if(i<9)
						{
							cout<<"AE";
						}
						else if(i>=9 && i<10)
						{
							cout<<"EA";
						}
				}
				else if(i>=10 && i<12)
				{
					cout<<"E";
						if(i<11)
						{
							cout<<"AC";
						}
						else if(i>=11 && i<12)
						{
							cout<<"CA";
						}
				}
			cout<<endl;
		}
		else if(i>=12 && i<18)
		{
			cout<<"C";
				if(i>=12 && i<14)
				{
					cout<<"A";
						if(i<13)
						{
							cout<<"BE";
						}
						else if(i>=13 && i<14)
						{
							cout<<"EB";
						}
				}
				else if(i>=14 && i<16)
				{
					cout<<"B";
						if(i<15)
						{
							cout<<"AE";
						}
						else if(i>=15 && i<16)
						{
							cout<<"EA";
						}
				}
				else if(i>=16 && i<18)
				{
					cout<<"E";
						if(i<17)
						{
							cout<<"AB";
						}
						else if(i>=17 && i<18)
						{
							cout<<"BA";
						}
				}	
			cout<<endl;
		}
		else if(i>=18 && i<24)
		{
			cout<<"E";
				if(i>=18 && i<20)
				{
					cout<<"A";
						if(i<19)
						{
							cout<<"BC";
						}
						else if(i>=19 && i<20)
						{
							cout<<"CB";
						}
				}
				else if(i>=20 && i<22)
				{
					cout<<"B";
						if(i<21)
						{
							cout<<"AC";
						}
						else if(i>=21 && i<22)
						{
							cout<<"CA";
						}
				}
				else if(i>=22 && i<24)
				{
					cout<<"C";
						if(i<23)
						{
							cout<<"AB";
						}
						else if(i>=23 && i<24)
						{
							cout<<"BA";
						}
				}
			cout<<endl;
		}
		sum4++;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	
	for(int i=0; i<24; i++)
	{
		cout<<"E";
		if(i<6)
		{
			cout<<"A";
				if(i<2)
				{
					cout<<"B";
						if(i<1)
						{
							cout<<"CD";
						}
						else if(i>=1 && i<2)
						{
							cout<<"DC";
						}
				}
				else if(i>=2 && i<4)
				{
					cout<<"C";
						if(i<3)
						{
							cout<<"BD";
						}
						else if(i>=3 && i<4)
						{
							cout<<"DB";
						}
				}
				else if(i>=4 && i<6)
				{
					cout<<"D";
						if(i<5)
						{
							cout<<"BC";
						}
						else if(i>=5 && i<6)
						{
							cout<<"CB";
						}
				}
			cout<<endl;
		}
		else if(i>=6 && i<12)
		{
			cout<<"B";
				if(i>=6 && i<8)
				{
					cout<<"A";
						if(i<7)
						{
							cout<<"CD";
						}
						else if(i>=7 && i<8)
						{
							cout<<"DC";
						}
				}
				else if(i>=8 && i<10)
				{
					cout<<"C";
						if(i<9)
						{
							cout<<"AD";
						}
						else if(i>=9 && i<10)
						{
							cout<<"DA";
						}
				}
				else if(i>=10 && i<12)
				{
					cout<<"D";
						if(i<11)
						{
							cout<<"AC";
						}
						else if(i>=11 && i<12)
						{
							cout<<"CA";
						}
				}
			cout<<endl;
		}
		else if(i>=12 && i<18)
		{
			cout<<"C";
				if(i>=12 && i<14)
				{
					cout<<"A";
						if(i<13)
						{
							cout<<"BD";
						}
						else if(i>=13 && i<14)
						{
							cout<<"DB";
						}
				}
				else if(i>=14 && i<16)
				{
					cout<<"B";
						if(i<15)
						{
							cout<<"AD";
						}
						else if(i>=15 && i<16)
						{
							cout<<"DA";
						}
				}
				else if(i>=16 && i<18)
				{
					cout<<"D";
						if(i<17)
						{
							cout<<"AB";
						}
						else if(i>=17 && i<18)
						{
							cout<<"BA";
						}
				}	
			cout<<endl;
		}
		else if(i>=18 && i<24)
		{
			cout<<"D";
				if(i>=18 && i<20)
				{
					cout<<"A";
						if(i<19)
						{
							cout<<"BC";
						}
						else if(i>=19 && i<20)
						{
							cout<<"CB";
						}
				}
				else if(i>=20 && i<22)
				{
					cout<<"B";
						if(i<21)
						{
							cout<<"AC";
						}
						else if(i>=21 && i<22)
						{
							cout<<"CA";
						}
				}
				else if(i>=22 && i<24)
				{
					cout<<"C";
						if(i<23)
						{
							cout<<"AB";
						}
						else if(i>=23 && i<24)
						{
							cout<<"BA";
						}
				}
			cout<<endl;
		}
		sum5++;
	}
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	total=sum1+sum2+sum3+sum4+sum5;
	cout<<"The total permutations of ABCDE are = "<<total<<endl;
	return 0;
}
