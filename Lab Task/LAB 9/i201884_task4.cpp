#include <iostream>
using namespace std;

int main() 
{
	int n1=550, n2=700;
    bool prime = true;
    cout<<"Prime numbers between 550 to 700 are: "<<endl;
	while (n1 < n2) 
	{
        prime = true;
        if (n1 == 0 || n2 == 1) 
		{
            prime = false;
        }
        else 
		{
        	for (int i=2; i<=n1/2; i++) 
			{
                if (n1%i == 0) 
				{
                    prime = false;
                    break;
                }
            }
        }
        if(prime)
        {
            cout<<n1<<endl;;
        }
		n1++;	
    }
    return 0;
}
