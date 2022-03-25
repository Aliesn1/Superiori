#include <iostream>
using namespace std;
int cont,n;

main ()
{
	cont=0;
	
	
	cout<<"Inserisci un numero";
	cin>>n;
	
	while (n>1)
	{
		cont++;
		cout<<"-"<<cont<<endl;
		n--;
	}

    while (n<1)
     {
     	cont++;
		cout<<"+"<<cont<<endl;
		n++;
     	
	 }


     cout<<"Tra il numero inserito e 1 ci sono "<<cont<<" numeri";
    


	
}
