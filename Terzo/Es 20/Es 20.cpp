#include <iostream>
#include <string>
using namespace std;

string carattere;


main ()
{

	cout<<"inserisci il carattere =>";
	cin>>carattere;
	
	if (carattere=="S")
	{
		cout<<"Si";
	}
	
	else 
	{
		if (carattere=="s")
		{
			cout<<"Si";
			
		}
		
		else
		{
			if (carattere=="N")
			{
				cout<<"No";
				
			}
			
			else
		{
				if (carattere=="n")
			{
				cout<<"No";
				
			}
			
				else 
				
				{
					cout<<"carattere non valido";
				}
		}
			
		}
	}
	
}

