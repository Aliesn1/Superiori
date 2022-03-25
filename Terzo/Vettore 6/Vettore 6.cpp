//2 vett, uno di nomi e uno di stipendi, max 100 nomi con grandezza inserita in input.
//media stipendi tra 1000 e 2000, visualizzare nome con stipendio più alto.



#include <iostream>
#include <string.h>
using namespace std;
int i,dim, m, j;

main ()
{
	m=0;
	do
	{
		cout<<"Inserire la grandezza =>";
		cin>>dim;
	} while (dim<=0||dim>100);
	int s[dim];
	string n[dim];	
	for (j=0;j<dim;j++)
	{
		cout<<"Inserisci il nome =>";
		cin>>n[i];
		cout<<"Inserisci lo stipendio =>";
		cin>>s[i];
		if (s[i]>=1000&&s[i]<=2000)
		{
			m=m+s[i];
		}
		for (i=0;i<dim-1;i++)
		{
			for (j=i+1;j<dim;j++)
			{
				 if (s[i]<s[j])	
				 {
				 	app=n[i];
				 	n[i]=n[j];
				 	n[j]=app;
				 	
				 }
			}
			
		}
			
		 
			
		}
	
	
	
	
	
}
