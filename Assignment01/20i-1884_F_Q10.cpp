#include<iostream>
#include<iomanip> //For using setw and setfill
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()
{
	int n1,n2,n3,n4,n5; //Declaring integers
	cout<<"Enter number 1 (0-10) : "; //Asking the user to input n1
	cin>>n1; //Inputting n1
	cout<<"Enter number 2 (0-10) : "; //Asking the user to input n2
	cin>>n2; //Inputting n2
	cout<<"Enter number 3 (0-10) : "; //Asking the user to input n3
	cin>>n3; //Inputting n3
	cout<<"Enter number 4 (0-10) : "; //Asking the user to input n4
	cin>>n4; //Inputting n4
	cout<<"Enter number 5 (0-10) : "; //Asking the user to input n5
	cin>>n5; //Inputting n5
	cout<<endl; //ending line
	cout<<setfill('*'); //Filling the space by a * 
	cout<<left; //Starting from left
	cout<<setw(n1+9)<<"Number01:"<<endl; //Setting up the setw that is n1 and Number01: length is n1+9
	cout<<setfill('*');//Filling the space by a * 
	cout<<left;//Starting from left
	cout<<setw(n2+9)<<"Number02:"<<endl;//Setting up the setw that is n2 and Number02: length is n2+9
	cout<<setfill('*');//Filling the space by a * 
	cout<<left;//Starting from left
	cout<<setw(n3+9)<<"Number03:"<<endl;//Setting up the setw that is n3 and Number03: length is n3+9
	cout<<setfill('*');//Filling the space by a * 
	cout<<left;//Starting from left
	cout<<setw(n4+9)<<"Number04:"<<endl;//Setting up the setw that is n4 and Number04: length is n4+9
	cout<<setfill('*');//Filling the space by a * 
	cout<<left;//Starting from left
	cout<<setw(n5+9)<<"Number05:"<<endl;//Setting up the setw that is n5 and Number05: length is n5+9
	return 0;
}
	
