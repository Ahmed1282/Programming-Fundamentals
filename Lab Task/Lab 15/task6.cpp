#include<iostream>
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
    
    int temp;
    int largest = 0;
    
    //Finding the largest element from each block of a 3D array
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
               temp = ptr[i][j][k];
               if(temp > largest)
               {
                   largest = temp;
               }
            }
        }
        cout << "Largest element from " << i + 1 << " 2-D array is: " << largest << endl;
        largest = 0;
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