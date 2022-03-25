#include <iostream>
using namespace std;
char scelta;
struct orario
{
	int ora;
	int minuti;
	
};
orario c;
main ()
{
	do
	{

	do
	{
	cout<<"Inserisci l'ora: ";
	cin>>c.ora;
	} while (c.ora<0||c.ora>24);
	
	
	do
	{
		cout<<"Inserisci i minuti: ";
		cin>>c.minuti;
	} while (c.minuti<0||c.minuti>60);
	
	
	switch (c.ora)
	{
		case 8:
				if (c.minuti>=00&&c.minuti<=53)
				{
					cout<<"E' la prima ora";
					
				}
				
				if (c.minuti>53)
				{
					cout<<"E' la seconda ora";
					
				}
				break;
		case 9:
				if (c.minuti>=48)
				{
					cout<<"E' la terza ora";
					
				}
				else
				{
					cout<<"E' la seconda ora";
				}
				break;
		case 10:
				if (c.minuti>=42)
				{
					cout<<"E' la quarta ora";
				}
				else
				{
					cout<<"E' la terza ora";
				}
				break;
		case 11:
				if (c.minuti>=36)
				{
					cout<<"E' la quinta ora";
				}
				else
				{
					cout<<"E' la quarta ora";
				}
				break;
		case 12:
				if (c.minuti<=32)
				{
					cout<<"E' la quinta ora";
				}
				else
				{
					cout<<"La giornata e' terminata";
				}
				break;
		default: cout<<"In questo orario non si e' a scuola";
				
	}
	cout<<endl;
	cout<<"Vuoi riprovare? premi s per continuare: ";
	cin>>scelta;
}while (scelta=='s');
	
	
}
  
