#include<iostream>
#include<fstream>

using namespace std;

int main ()
{

    int counter =0;
    ofstream fileout;

    fileout.open("STORY.txt" , ios::out);

    if(!fileout)
        {
            cout<<"\nFILE NOT CREATED\n";

        }
        else
        {
            fileout<<"The rose is red.\nA girl is playing there.\nThere is a playground.\nAn aeroplane is in the sky.\nNumbers are not allowed in the password.\n";
        }

        fileout.close();

        //READING FROM THE FILE

        ifstream filein ("STORY.txt", ios:: in);

        if(filein.is_open())
	{
		char temp;
		while (!filein.eof())
		{
			filein.get(temp);
            if(temp == '\n' )
            {
                filein.get(temp);
                if(temp == 'a' || temp == 'A')
                {
                    counter++;
                }
            }
            
			
		}
		filein.close();
	
    cout<<"THE SENTENCES STARTING WITH A ARE : "<<counter<<endl;

    }

    else 
    {
        cout<<"error\n";
    }
    





    return 0;
}