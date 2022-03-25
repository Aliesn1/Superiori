#include <iostream>
#include "quadrato.h"
#include "prisma.h"
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	prisma p;
	double a;
	cout<<"Inserisci il lato =>";
	cin>>a;
	p.set_lato(a);
	cout<<"Inserisci l'altezza =>";
	cin>>a;
	p.set_altezza(a);
	cout<<endl<<"Il volume e' "<<p.volume()<<endl;
	cout<<"La superficie totale e' "<<p.superficie();
}
