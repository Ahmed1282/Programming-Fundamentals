#include<iostream>
#include<fstream>

using namespace std;

int main ()
{

int counter=0;

string quote = "\nTime is a great teacher but unfortunately it kills all its pupils\n";

ofstream writefile("OUT.txt", ios ::out);

if(!writefile)
{
    cout<<"\nFILE NOT CREATED\n";
}

else 
{
    writefile<<quote;

}


writefile.close();

//READING FROM THE FILE 

	ifstream filein ("OUT.txt", ios:: in);
	
	if(filein.is_open())
	{
		char temp;
		while (!filein.eof())
		{
			filein.get(temp);
            if(temp == '\n' || temp == '\0' || temp == ' ' )
            {
                continue;
            }
            counter++;
			
		}
		filein.close();
	}

    cout<<"\nTHE NUMBER OF ALPHABETS IS : "<<counter<<endl;




    return 0;
}