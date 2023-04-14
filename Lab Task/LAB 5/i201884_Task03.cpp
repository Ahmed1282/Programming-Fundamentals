#include<iostream>
using namespace std;
int main()
{
	int purchase,discount_purchase,total_cost;
	cout<<"Please enter the total purchase?"<<endl;
	cin>>purchase;
	cout<<endl;
	if(purchase > 2000)
	{
		discount_purchase = (0.1*purchase);
		total_cost= purchase - discount_purchase;
		cout<<"Cost (Before dicount) = "<<purchase<<endl;
		cout<<"Cost (After discount) = "<<total_cost<<endl;	
	}
	else if(purchase <= 2000)
	{
		cout<<"Cost = "<<purchase<<endl;
	}
	return 0;
}
