#include <iostream>
using namespace std;
struct persona {
	
	string nome;
	float peso;
	};
persona a[5];
persona *b;
persona app;

main ()
{
	int i,j;
	b=&a[0];
	
	for (i=0;i<5;i++)
	{
		cout<<"Inserisci il nome=> ";
		cin>>(b+i)->nome;
		cout<<"Inserisci il peso=> ";
		cin>>(b+i)->peso;
		
	}
	
	for (i=0;i<5;i++)
	{
		cout<<(b+i)<<endl;	
	}
	
	for (i=0;i<4;i++)
	{
		for (j=i+1;j<5;j++)
		{
			
			if ((b+i)->nome>(b+j)->nome)
			{
				app=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=app;
				
			}
		}
	}
	
	for (i=0;i<5;i++)
	{
		
		cout<<"nome: "<<(b+i)->nome<<endl;
		cout<<"peso: "<<(b+i)->peso<<endl;
		
	}
	
	
	
}
