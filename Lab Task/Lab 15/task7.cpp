#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x = 3, y = 4, z = 2;
    
    int*** ptr = new int**[x];
    
    for(int i = 0; i < x; i++)
    {
        ptr[i] = new int*[y];
        
        for(int j = 0; j < y; j++)
        {
            ptr[i][j] = new int[z];
        }
    }
    
    //Getting values from the user
    for(int i = 0; i < x; i++)
    {
        cout << "Enter values for the " << i + 1 << " 2-D array: " << endl;
        for(int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }
    
    double mean = 0.0;
    double sum = 0.0;
    
    //Finding the mean
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
               sum += ptr[i][j][k];
            }
        }
       
        cout << fixed << showpoint << setprecision(2); 
        mean = sum / (y * z);
        cout << "Mean of " << i + 1 << " 2-D array is: " << mean << endl;
        sum = 0.0;
    }
    
    //Deallocating the memory
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
    
    return 0;
}