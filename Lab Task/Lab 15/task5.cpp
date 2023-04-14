#include<iostream>
#include<cmath>
using namespace std;

double norm (int r, int c , int **Arr)
{
double ans=0;
for (int i=0 ; i<r ; i++)
{
for (int j=0 ; j<c ; j++)
{
ans+=pow(Arr[i][j],2);
}
}
ans=pow(ans,0.5);

return ans;

}

int main()
{
int row,col;
double ans=0;
cout<<"Enter no. of rows: ";
cin>>row;
cout<<"Enter no. of col: ";
cin>>col;
int **A= new int *[row];
for (int i=0 ; i<row ; i++)
{
A[i]= new int[col];
}
for (int i=0 ; i<row ; i++)
{
for (int j=0 ; j<col ; j++)
{
cout<<"Enter an Element"<<i<<","<<j<<": ";
cin>>A[i][j];
}
}
ans=norm(row,col,A);
cout<<"Euclidean Norm is: "<<ans<<endl;

for(int i=0 ; i<row ; i++)
delete[] A[i];
delete[] A;
return 0;
}
