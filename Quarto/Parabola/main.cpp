#include <iostream>
#include "parabola.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c;
	int s;
	parabola k;
	cin>>a;
	cin>>b;
	cin>>c;
	k.set_ax(a);
	k.set_bx(b);
	k.set_cx(c);
	do
	{
		cout<<"1)Calcola il fuoco"<<endl<<"2)Calcola il vertice"<<endl<<"3)Calcola l'asse"<<endl<<"4)Calcola la direttrice"<<endl;
		cin>>s;
		switch (s)
		{
			case 1: k.fuoco();
					cout<<"x:"<<k.get_x()<<endl;
					cout<<"y:"<<k.get_y()<<endl;
					break;
			case 2:
					k.vertice();
					cout<<"x:"<<k.get_x()<<endl;
					cout<<"y:"<<k.get_y()<<endl;
					break;
			case 3:
					k.asse();
					cout<<"x:"<<k.get_x()<<endl;
					cout<<"y:"<<k.get_y()<<endl;
					break;
			case 4:
					k.direttrice();
					cout<<"x:"<<k.get_x()<<endl;
					cout<<"y:"<<k.get_y()<<endl;
					break;
			default: cout<<"Scelta errata";
		}
		
	}while (s<5||s>=0);
	
}
