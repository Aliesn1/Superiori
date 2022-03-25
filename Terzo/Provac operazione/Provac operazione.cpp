   #include <iostream>
   #include <string>
   #include <cstring>
   #include <stdio.h>
   #include <stdlib.h>
   
using namespace std;
int main()
{
	// Variables definition
    float a, b, risultato;
    string sOperazione;

    
    // Variables initialization
    a = 0;
    b = 0;
	risultato = 0;
	sOperazione = '\0';
    
    // Input variables
    cout << "Programma calcolatore\n\n";
    cout << "inserisci il primo numero => ";
    cin >> a;
	
    cout << "inserisci il secondo numero => ";
    cin >> b;
    
    while(sOperazione != "somma" && sOperazione != "sottrazione" && sOperazione != "moltiplicazione" && sOperazione != "divisione")
    {
    	    cout << "Inserisci l''operazione (somma / sottrazione / moltiplicazione / divisione) => ";
    		cin >> sOperazione;
	}

   
    //condition
    
    if (sOperazione != "somma" && sOperazione != "sottrazione" && sOperazione != "moltiplicazione" && sOperazione != "divisione")
  	{
    	cout <<"\nOperazione non valida!\n";
	} 
   
    
     else if (sOperazione == "somma")
    {
    	risultato = a+b;
    	cout << "\n\n Hello world, il risultato della somma e' " << risultato;
	}
	
	
	else if (sOperazione == "sottrazione")
    {
    	risultato = a-b;
    	cout << "\n\n Hello world, il risultato della sottrazione e' " << risultato;
	}
	
	
	else if (sOperazione == "divisione")
    {
    	risultato = a/b;
    	cout << "\n\n Hello world, il risultato della divisione e' " << risultato;
	}
	
	
	else if (sOperazione == "moltiplicazione")
    {
    	risultato = a*b;
    	cout << "\n\n Hello world, il risultato del prodotto e' " << risultato;
	}

    cout << "\n\n\n";
    system ("pause");
}
