#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	char choice1,choice2;
	cout<<"Please enter 1st Primary colour? (Red = r, Blue = b , Yellow = y)"<<endl;
	cin>>choice1;
	cout<<"Please enter 2nd Primary colour? (Red = r, Blue = b , Yellow = y)"<<endl;
	cin>>choice2;
	cout<<endl;
	if( choice1 == 'r' && choice2 == 'r'|| choice1 == 'b' && choice2 == 'b' || choice1 == 'y' && choice2 == 'y' || choice1 == 'r' && choice2 == 'b' || choice1 == 'b' && choice2 == 'r' || choice1 == 'r' && choice2 == 'y' || choice1 == 'r' && choice2 == 'y' || choice1 == 'b' && choice2 == 'y' || choice1 == 'y' && choice2 == 'b')
	{
		switch(choice1 == 'r' && choice2 == 'r')
		{
			case 1:
				cout<<"Secondary colour is Red";
				break;
				
			case 0:
				switch(choice1 == 'b' && choice2 == 'b')
				{
					case 1:
						cout<<"Secondary colour is Blue";
						break;
						
					case 0:
						switch(choice1 == 'y' && choice2 == 'y')
						{
							case 1:
								cout<<"Secondary colour is Yellow";
								break;
						
							case 0:
								switch(choice1 == 'r' && choice2 == 'b' || choice1 == 'b' && choice2 == 'r')
								{
									case 1:
										cout<<"Secondary colour is Purple";
										break;
						
									case 0:
										switch(choice1 == 'r' && choice2 == 'y' || choice1 == 'r' && choice2 == 'y')
										{
											case 1:
												cout<<"Secondary colour is Orange";
												break;
						
											case 0:
												switch( choice1 == 'b' && choice2 == 'y' || choice1 == 'y' && choice2 == 'b')
												{
													case 1:
														cout<<"Secondary colour is Green";
														break;
						
													case 0:
														cout<<"Invalid Input";	
												}	
										}
								}
						}
				}
				break;
			
		}
	}
	else
	{
		cout<<"Invlaid Input";
	}
	return 0;
}
