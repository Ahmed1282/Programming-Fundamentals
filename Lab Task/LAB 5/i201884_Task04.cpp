#include<iostream>
using namespace std;
int main()
{
	double total_class,attended_class,percentage_class;
	cout<<"Enter total number of classes scheduled by instructor during the whole semester?"<<endl;
	cin>>total_class;
	cout<<"Enter total number of classes attended during the whole semester?"<<endl;
	cin>>attended_class;
	cout<<endl;
	percentage_class=((attended_class/total_class)*100);
	if(percentage_class >= 75 && percentage_class < 100)
	{
		cout<<"Percentage of attendence = "<<percentage_class<<"%"<<endl;
		cout<<"Allowed to sit in Exam";
	}
	else if(percentage_class < 75 && percentage_class > 0)
	{
		cout<<"Percentage of attendence = "<<percentage_class<<"%"<<endl;
		cout<<"Not allowed to sit in Exam";
	}
	else if(percentage_class > 100 || percentage_class < 0)
	{
		cout<<"Invalid Input";
	}
	return 0;
}
	
