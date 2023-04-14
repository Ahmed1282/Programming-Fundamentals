#include<iostream>
using namespace std;
//Muhammad Ahmed Baig_i201884

int main()
{
	int num,num1,num2,num3,num4;
	cout<<"Enter a 4 digit number: ";
	cin>>num;
	if(num >= 10000)
	{
		cout<<endl;
		cout<<"Invalid Input";
	}
 	else if(num <= 999)
	{
		cout<<endl;
		cout<<"Invalid Input";
	}
	else
	{
		num1=num%10;
		num2=(((num%100)-num1)/10);
		num3=(((num%1000)-(num%100))/100);
		num4=(((num%10000)-(num%1000))/1000);
		cout<<endl;
		cout<<"Number in Reverse: "<<num1<<num2<<num3<<num4<<endl;
	}
	return 0;
}
