#include <iostream>
using namespace std;
struct articoli
{
	string nome;
	float prezzo;
};
articoli a[5];
articoli *p;
int i;
main ()
{

p=&a[0];
	for (i=0;i<5;i++)
	{	
		cin>>p->nome;
		cin>>p->prezzo;
		p++;
	}
p=p-i;	
	for (i=0;i<5;i++)
	{
		cout<<p->nome<<endl;
		cout<<p->prezzo<<endl;
		p++;
	}
	
	
}
