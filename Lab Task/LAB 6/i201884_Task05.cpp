#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Please enter score: ";
	cin>>x;
	cout<<endl;
	x>=90 ? cout<<"Grade = A+" : x<90 && x>=80 ? cout<<"Grade = A" : x<80 && x>=70 ? cout<<"Grade = B" : x<70 && x>=60 ? cout<<"Grade = c" : x<60 && x>=50 ? cout<<"Grade = D" : cout<<"Grade = F";   
	return 0; 
}
