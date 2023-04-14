#include <iostream>
using namespace std;

int main()
{
    int* A = new int[10];
	int x;
	int max;
	cout<<"Enter 10 numbers:"<<endl;
	for(int i=0 ; i<10 ; i++)
	{
	cin>>x;
	*(A+i) = x;
	}

max=*A;

for(int i=1 ; i<10 ; i++)
{
	if(*(A+i)>max)
	max=*(A+i);

}
cout<<"largest numberof array is :"<<max<<endl;

return 0;
}

