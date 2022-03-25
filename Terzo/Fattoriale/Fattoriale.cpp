
#include <iostream>
using namespace std;

int numero,fattoriale;
 main()
{

		numero = 0;
		fattoriale = 1;

	
		cout<<"Inserire un numero intero positivo di cui calcolare il fattoriale: ";
		cin>>numero;

		
		if (numero > 0) {

		
		while (numero > 0)
		{
			fattoriale *= numero; 
			numero--;
		}
			
			cout<<"Il fattoriale vale:" <<fattoriale<<endl;
		}

		
		else {
			cout<<"Non è possibile calcolare il fattoriale di un numero non positivo! \n";
		}
		

    return 0;
}
