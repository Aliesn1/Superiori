#include <iostream>
using namespace std;


main ()
{
	long * punt;
	long a=5;
	punt=&a;
	cout<<"il valore della variabile e puntata da punt e': "<<*punt<<endl;
	cout<<"modifico il valore della variabile puntata da punt"<<endl;
	*punt=3;
	cout<<"Viene visualizzato il valore della variabile a puntata da punt: ";
	cout<<*punt<<endl;
	cout<<"Viene stampato l'indirizzo della variabile a, ossia il valore del puntatore: ";
	cout<<punt;
	
	
	
}
