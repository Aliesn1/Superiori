#include <iostream>
#include "triangolo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	triangolo t;
	t.set_azzera();
	int s;
	cout<<"1)Equilatero"<<endl<<"2)Isoscele"<<endl<<"3)Scaleno"<<endl<<"Inserisci la scelta=>";
	cin>>s;
	switch (s)
	{
		case 1:
				int le;
				cin>>le;
				t.set_equilatero(le);
				break;
		case 2:
				int li,li2;
				cin>>li;
				cin>>li2;
				t.set_isoscele (li, li2);
				break;
		case 3:
				int ls,ls2,ls3;
				cin>>ls;
				cin>>ls2;
				cin>>ls3;
				t.set_scaleno (ls, ls2, ls3);
				break;
		}	
	cout<<"Il perimetro e' "<<t.perimetro();
}
