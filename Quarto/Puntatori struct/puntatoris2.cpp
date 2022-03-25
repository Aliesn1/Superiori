#include <iostream>
using namespace std;
struct persona
{
	string nome;
	string cognome;
	int peso;
	float altezza;
};
int i;
persona a[5];
persona *b;
main ()
{
	
	for(i=0;i<5;i++)
	{
		b=&a[i];
		cin>>(*b).nome;
		cin>>(*b).cognome;
		cin>>(*b).peso;
		cin>>(*b).altezza;
	}
	
	for(i=0;i<5;i++)
	{
		b=&a[i];
		cout<<(*b).nome;
		cout<<(*b).cognome;
		cout<<(*b).peso;
		cout<<(*b).altezza;
		cout<<endl; 
	}
}
