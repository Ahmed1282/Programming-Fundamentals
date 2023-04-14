#include<iostream>
#include<fstream>

using namespace std;


int main ()
{
    ofstream fileout;
    fileout.open("NOTES.TXT", ios ::out);
      
        if(!fileout)
        {
            cout<<"\nFILE NOT CREATED\n";

        }
        else
        {
        
            fileout<<"NUMBERS FROM 1 to 100\n";
                for (int i=0; i<101; i++)
                    {
                        fileout<<i<<endl;
                    }

        }
        fileout.close();

    return 0;


    



}