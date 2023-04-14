#include <iostream>
#include <cstring>
using namespace std;
void count(char str[100])
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	for (int i=0; str[i]!='\0'; i++)
	{
		if (str[i]=='a' || str[i]=='A')
		a++;
		if (str[i]=='b' || str[i]=='B')
		b++;
		if (str[i]=='c' || str[i]=='C')
		c++;
		if (str[i]=='d' || str[i]=='D')
		d++;
		if (str[i]=='e' || str[i]=='E')
		e++;
		if (str[i]=='f' || str[i]=='F')
		f++;	
		if (str[i]=='g' || str[i]=='G')
		g++;
		if (str[i]=='h' || str[i]=='H')
		h++;
		if (str[i]=='i' || str[i]=='I')
		i++;
		if (str[i]=='j' || str[i]=='J')
		j++;
		if (str[i]=='k' || str[i]=='K')
		k++;
		if (str[i]=='l' || str[i]=='L')
		l++;
		if (str[i]=='m' || str[i]=='M')
		m++;
		if (str[i]=='n' || str[i]=='N')
		n++;
		if (str[i]=='o' || str[i]=='O')
		o++;
		if (str[i]=='p' || str[i]=='P')
		p++;
		if (str[i]=='q' || str[i]=='Q')
		q++;
		if (str[i]=='r' || str[i]=='R')
		r++;
		if (str[i]=='s' || str[i]=='S')
		s++;
		if (str[i]=='t' || str[i]=='T')
		t++;
		if (str[i]=='u' || str[i]=='U')
		u++;
		if (str[i]=='v' || str[i]=='V')
		v++;
		if (str[i]=='w' || str[i]=='W')
		w++;
		if (str[i]=='x' || str[i]=='X')
		x++;
		if (str[i]=='y' || str[i]=='Y')
		y++;
		if (str[i]=='z' || str[i]=='Z')
		z++;
	}
	cout<<endl;
	cout<<"Count of a :  "<<a<<endl;
	cout<<"Count of b :  "<<b<<endl;
	cout<<"Count of c :  "<<c<<endl;
	cout<<"Count of d :  "<<d<<endl;
	cout<<"Count of e :  "<<e<<endl;
	cout<<"Count of f :  "<<f<<endl;
	cout<<"Count of g :  "<<g<<endl;
	cout<<"Count of h :  "<<h<<endl;
	cout<<"Count of i :  "<<i<<endl;
	cout<<"Count of j :  "<<j<<endl;
	cout<<"Count of k :  "<<k<<endl;
	cout<<"Count of l :  "<<l<<endl;
	cout<<"Count of m :  "<<m<<endl;
	cout<<"Count of n :  "<<n<<endl;
	cout<<"Count of o :  "<<o<<endl;
	cout<<"Count of p :  "<<p<<endl;
	cout<<"Count of q :  "<<q<<endl;
	cout<<"Count of r :  "<<r<<endl;
	cout<<"Count of s :  "<<s<<endl;
	cout<<"Count of t :  "<<t<<endl;
	cout<<"Count of u :  "<<u<<endl;
	cout<<"Count of v :  "<<v<<endl;
	cout<<"Count of w :  "<<w<<endl;
	cout<<"Count of x :  "<<x<<endl;
	cout<<"Count of y :  "<<y<<endl;
	cout<<"Count of z :  "<<z<<endl;	
}
int main()
{
	char str[100];
	cout<<"Please Enter String : ";
	cin.get(str,100);
	int size= sizeof(str)/sizeof(str[0]);
	count(str);
	return 0;
}
