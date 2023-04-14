#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    int counter=0; 

    ifstream fileread ("OUT.txt", ios:: in);

    if(fileread.is_open())
	{   
        string temp;
        while (!fileread.eof())
		{
			fileread >> temp;
            counter++;
			
		}
		fileread.close();

    }
    counter--; //because the last null character is read into the string
    cout<<"THE NUMBER OF WORDS ARE : "<<counter<<endl;








    return 0;

}