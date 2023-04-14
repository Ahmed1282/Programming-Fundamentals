#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int row,col;
cout<<"Enter no. of coloumns: ";
cin>>col;
cout<<"Enter no. of rows: ";
cin>>row;
int **MATRIX= new int *[row];
for (int i=0 ; i<col ; i++)
{
MATRIX[i]= new int[col];
}
for (int i=0 ; i<col ; i++)
{
for (int j=0 ; j<row ; j++)
{
cout<<"Enter an Element"<<i<<","<<j<<": ";
cin>>MATRIX[i][j];
}
}
double ANS=0;
for (int i=0 ; i<col ; i++)
{
for (int j=0 ; j<row ; j++)
{
ANS+=pow(MATRIX[i][j],2);
}
}
ANS=pow(ANS,0.5);
cout<<"Euclidean Norm is: "<<ANS<<endl;
delete[] MATRIX;
return 0;
}
