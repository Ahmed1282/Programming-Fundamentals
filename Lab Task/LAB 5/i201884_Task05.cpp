#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Please enter the score: ";
	cin>>score;
	if(score >= 90 && score <=100)
	{
		cout<<"Grade = A+";
	}
	else if(score >= 80 && score <= 89)
	{
		cout<<"Grade = A";
	}
	else if(score >= 70 && score <= 79)
	{
		cout<<"Grade = B";
	}
	else if(score >= 60 && score <= 69)
	{
		cout<<"Grade = C";
	}
	else if(score >= 50 && score <= 59)
	{
		cout<<"Grade = D";
	}
	else if(score >= 0 && score <= 49)
	{
		cout<<"Grade = F";
	}
	else if(score > 100 || score < 0)
	{
		cout<<"Invalid Input";
	}
	return 0;
}
