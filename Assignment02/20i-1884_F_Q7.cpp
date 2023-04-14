#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	int health,age,lives,gender,premium,amount;
	cout<<"Press the number for the health of the person?";
	cout<<" 1.Excelent 2.Poor"<<endl;
	cin>>health;
	cout<<"Enter the age of the person?"<<endl;
	cin>>age;
	cout<<"Press the number for where the person lives?";
	cout<<" 1.City 2.Village"<<endl;
	cin>>lives;
	cout<<"Press the number for the gender of the person?";
	cout<<" 1.Male 2.Female"<<endl;
	cin>>gender;
	cout<<endl;
	if(health == 1 && lives == 1 && gender == 1 || health == 1 && lives == 1 && gender == 2 || health == 1 && lives == 2 && gender == 1 || health == 1 && lives == 2 && gender == 2 || health == 2 && lives == 1 && gender == 1 || health == 2 && lives == 1 && gender == 2 || health == 2 && lives == 2 && gender == 1 || health == 2 && lives == 2 && gender == 2)
	{
		if(health == 1 && age >= 25 && age <= 35 && lives == 1 && gender == 1 )
		{
			premium=4;
			amount=200000;
			cout<<"The premium is Rs. "<<premium<<" per thousand and policy amount cannot exceed "<<amount;
		}
		else if(health == 1 && age >= 25 && age <= 35 && lives == 1 && gender == 2 )
		{
			premium=3;
			amount=100000;
			cout<<"The premium is Rs. "<<premium<<" per thousand and policy amount cannot exceed "<<amount;
		}
		else if(health == 2 && age >= 25 && age <= 35 && lives == 2 && gender == 1 )
		{
			premium=6;
			amount=10000;
			cout<<"The premium is Rs. "<<premium<<" per thousand and policy amount cannot exceed "<<amount;
		}
		else
		{	
			cout<<"The person is not insured";
		}
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	return 0;
}
