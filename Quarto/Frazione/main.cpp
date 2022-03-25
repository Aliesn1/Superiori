#include <iostream>
#include "frazione.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	frazione k;
	int a,b;
	float c;
	cin>>a;
	cin>>b;
	k.set_num(a);
	k.set_den(b);
	cout<<"Il valore della divisione e':"<<k.calcvalore()<<endl;
	cout<<"Inserisci numeratore e denominatore della frazione da moltiplicare=>";
	cin>>a;
	cout<<"/";
	cin>>b;
	k.moltiplicazione(a,b);
	cout<<endl<<"Il risultato della moltiplicazione e':"<<a<<"/"<<b<<endl;
	cout<<"Inserisci numeratore e denominatore della frazione da dividere=>";
	cin>>a;
	cout<<"/";
	cin>>b;
	k.divisione(a,b);
	cout<<endl<<"Il risultato della moltiplicazione e':"<<a<<"/"<<b<<endl;
	k.semplifica();
	cout<<"La frazione semplificata e':"<<k.get_num()<<"/"<<k.get_den();
	

	
}
