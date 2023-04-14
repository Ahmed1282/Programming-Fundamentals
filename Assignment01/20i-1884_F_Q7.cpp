#include<iostream>
using namespace std;
//20i-1884_Muhammad Ahmed Baig

int main()

{
	int n,a,b,c,d,e,f,ra,rb,rc,rd,re,rf; //Declaring integers
	cout<<"Enter number of Rupees : ";
	cin>>n; //inputer number of rupees
	a=n/500; //a is number of 500 notes
	ra=n%500; // the remainder after 500 notes
	b=ra/100; //b is number of 100 notes
	rb=ra%100; // the remainder after 100 notes
	c=rb/50; //c is number of 50 notes
	rc=rb%50; // the remainder after 50 notes
	d=rc/20; //d is number of 20 notes
	rd=rc%20; // the remainder after 20 notes
	e=rd/10; //e is number of 10 notes
	re=rd%10; // the remainder after 10 notes
	f=re/5; //f is number of 5 notes
	rf=re%5; // the remainder after 5 notes and as well as remaining 1 notes
	cout<<endl;//Ending line
	cout<<" 500 : "<<a<<endl; //Outputing number of 500 notes
	cout<<" 100 : "<<b<<endl; //Outputing number of 100 notes
	cout<<"  50 : "<<c<<endl; //Outputing number of 50 notes
	cout<<"  20 : "<<d<<endl; //Outputing number of 20 notes
	cout<<"  10 : "<<e<<endl; //Outputing number of 10 notes
	cout<<"   5 : "<<f<<endl; //Outputing number of 5 notes
	cout<<"   1 : "<<rf<<endl; //Outputing number of 1 notes
	return 0;
	
	
}
