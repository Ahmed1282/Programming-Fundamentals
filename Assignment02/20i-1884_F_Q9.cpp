#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	double hardness,carbon,tensile,grade;
	cout<<"Please enter the Hardness: ";
	cin>>hardness;
	cout<<"Please enter the Carbon Content: ";
	cin>>carbon;
	cout<<"Please enter the Tensile strenght: ";
	cin>>tensile;
	cout<<endl;
	if(hardness > 50 && carbon < 0.7 && tensile > 5600)
	{
		grade = 10;
		cout<<"Grade "<<grade;
	}
	else if(hardness > 50 && carbon < 0.7)
	{
		grade = 9;
		cout<<"Grade "<<grade;
	}
	else if(carbon < 0.7 && tensile > 5600)
	{
		grade = 8;
		cout<<"Grade "<<grade;
	}
	else if(hardness > 50 && tensile > 5600)
	{
		grade = 7;
		cout<<"Grade "<<grade;
	}
	else if(hardness > 50 || carbon < 0.7 || tensile > 5600)
	{
		grade = 6;
		cout<<"Grade "<<grade;
	}
	else
	{
		grade = 5;
		cout<<"Grade "<<grade;
	}
return 0;

}
