#include <iostream>
#include "studente.h"
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float a;
	studente s ("a", "b");
	cout<<"Inserisci i voti delle materie:"<<endl;
	cout<<"Italiano:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Matematica:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Inglese:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Sistemi:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Informatica:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Telecomunicazioni:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Tep:"; cin>>a; s.set_voto(a); cout<<endl;
	cout<<"Storia:"; cin>>a; s.set_voto(a); cout<<endl;
	
	
	cout<<"Lo studente e' stato promosso? ";if (s.promosso(a)==false)
											{
												cout<<"bocciato";
											}
											else
											{
												cout<<"promosso";
											}
											cout<<" con una media di "<<a;
}
