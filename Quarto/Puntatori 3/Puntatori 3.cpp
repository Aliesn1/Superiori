#include <iostream>
using namespace std;


main ()
{
	int i;
	int *pi;
	pi=&i;
	cout<<"Il valore di pi e': "<<pi<<endl;
	i=1;
	cout<<"Il valore di i e': "<<i<<endl;
	(*pi)++;
	cout<<"Il valore di i e' stato incrementato di 1: "<<*pi<<endl;
	pi++;
	cout<<"L'indirizzo e': "<<pi<<endl;
	cout<<"Il contenuto e': "<<*pi<<endl;
	*pi++;
	cout<<"L'indirizzo e': "<<pi<<endl;
	cout<<"Il contenuto e': "<<*pi<<endl;
	

	
	
	
}
