#include <iostream>
#include "cerchio.h"
#include "cono.h"
using namespace std;

int main() {
	
	cono k;
	double a,b;
	cout<<"Inserisci il raggio =>"; cin>>a;
	k.set_raggio(a);
	cout<<"Inserisci l'altezza =>"; cin>>a;
	k.set_altezza(a);
	cout<<endl<<"Il volume e':"<<k.volume()<<" e la superficie e':"<<k.superficie();	
	
}
