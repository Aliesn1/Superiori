#include <iostream>
#include "televisione.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	televisione k(0,5,1);

	int a,s,c;
	
	cout<<endl<<endl;
	do
	{
		a=k.get_alimentazione();
		if (a==1)
		{
			cout<<"Accesa"<<endl;
			cout<<"Canale:"<<k.get_canale()<<endl;
			cout<<"Volume:"<<k.get_volume()<<endl;
		}
		else
		{
			cout<<"Spenta"<<endl;
		}
		
		cout<<"1) Pulsante power"<<endl<<"2) Canale successivo"<<endl<<"3) Canale precedente"<<endl<<"4) Aumenta volume"<<endl<<
		"5) Abbassa volume"<<endl<<"6) Imposta canale"<<endl<<"7) Pulsante silenzioso"<<endl;
		cin>>s;
		switch (s)
		{
			case 1: k.pulsanterosso();
					break;
			case 2: 
					if (a==1)
					{
						k.canaleSuccessivo();
					}
					break;
			case 3: if (a==1)
					{
						k.canalePrecedente();
					}
					break;
			case 4: if (a==1)
					{
						k.aumentaVolume();
					}
					break;
			case 5: if (a==1)
					{
						k.abbassaVolume();
					}
					break;
			case 6: if (a==1)
					{
						cout<<"Inserisci il canale=>"; cin>>c;
						k.impostaCanale(c);
					}
						
					break;
			case 7: if (a==1)
					{
						k.pulsanteSilenzioso();
					}
					break;
			default: cout<<"Scelta non valida";
						
			cout<<endl;		
		}
	} while (s<=7);
}
