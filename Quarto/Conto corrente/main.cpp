#include <iostream> //correntista, numero conto, saldo, prelievo che dice se l'operazione va a buon fine, versamento
#include "conto.h"
using namespace std;
int main() 
{
	conto k[2];
	string nome,nc;
	bool b;
	float a;
	int s,i=0;
	cout<<"Inserisci il nome del correntista=>";
	cin>>nome;
	k[i].set_correntista(nome);
	cout<<"Inserisci il saldo iniziale=>";
	cin>>a;
	k[i].set_saldo(a);
	cout<<"Inserisci il numero del conto=>";
	cin>>nc;
	k[i].set_nc(nc);
	i=1;
	cout<<"Inserisci il nome del correntista=>";
	cin>>nome;
	k[i].set_correntista(nome);
	cout<<"Inserisci il saldo iniziale=>";
	cin>>a;
	k[i].set_saldo(a);
	cout<<"Inserisci il numero del conto=>";
	cin>>nc;
	k[i].set_nc(nc);
	i=0;
	do
	{
	cout<<"1)Stampa il nome del correntista"<<endl<<"2)Stampa il numero di conto"<<endl<<"3)Stampa il saldo"<<endl<<"4)Preleva"<<endl<<"5)Versamento"<<endl<<"6)versa nel conto deposito"<<endl<<"7)Cambia il cliente"<<endl<<"8) Esci"<<endl;
	cin>>s;
	switch (s)
	{
		case 1: cout<<k[i].get_correntista()<<endl;
				break;
		case 2: cout<<k[i].get_nc()<<endl;
				break;
		case 3: cout<<"Il saldo totale e' "<<k[i].get_totale()<<endl<<"Il saldo disponibile e' "<<k[i].get_saldo();
				break;
		case 4: cout<<"Inserisci la quantita' da prelevare=>";
				cin>>a;
				b=k[i].prelievo(a);
				if (b==false)
				{
					cout<<"Hai superato il saldo";
				}
				else
				{
					cout<<"Il prelievo e' andato a buon fine, il tuo saldo e':"<<k[i].get_saldo();
				}
				break;
		case 5: cout<<"Inserisci la quantita' da versare=>";
				cin>>a;
				k[i].versamento(a);
				break;
		case 6:cout<<"Inserisci la quantita' da depositare=>";
				cin>>a;
				b=k[i].contodeposito(a);
				if (b==false)
				{
					cout<<"Hai superato il saldo";
				}
				else
				{
					cout<<"Il deposito e' andato a buon fine, il tuo saldo e':"<<k[i].get_saldo()<<endl
					<<"Ora il tuo saldo nel conto di deposito e':"<<k[i].get_cdeposito()<<endl;
				}
				break;
			
		case 7: if (i==0)
				{
					i=1;
				}
				else 
				{
					i=0;
				}
				break;
	}
	cout<<endl;
	}while (s<7);
}
