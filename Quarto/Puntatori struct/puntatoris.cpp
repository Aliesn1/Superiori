#include <iostream>
using namespace std;
struct persona
{
	string nome;
	string cognome;
	int peso;
	float altezza;
};
persona a;
persona *b;
main ()
{
	b=&a;
	cin>>(*b).nome;
	cin>>(*b).cognome;
	cin>>(*b).peso;
	cin>>(*b).altezza;
	cout<<(*b).nome;
	cout<<(*b).cognome;
	cout<<(*b).peso;
	cout<<(*b).altezza;
}
