#include <iostream>
using namespace std;
int n,spari,sdispari,cont;
main ()
{
	cont=0;
	spari=0;
	sdispari=0;
	n=1;
	
	
	while (cont<10)
	{
	
	if (n%2==0)
	{
		spari=spari+n;
	}
	
	else
	{
		sdispari=sdispari+n;
	}
		
		n++;
		
		cont++;
	}
	
	cout<<"La somma dei numeri pari da 1 a 10 e' =>"<<spari<<endl;
	cout<<"La somma dei numeri dispari da 1 a 10 e' =>"<<sdispari<<endl;
	
	
}
