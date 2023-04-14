#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int x,sum=0,i=0,n=100;;
	srand(time(0));
	do
	{
		x = (rand() % n)+1;
		sum=sum+x;
		n=n-x;
		i++;
		cout<<"Price of item"<<" "<<i<<" = "<<x<<endl;
				
	}while(n != 0 && sum <= 100);
	cout<<"Total number of products = "<<i<<endl;
	return 0; 
}
