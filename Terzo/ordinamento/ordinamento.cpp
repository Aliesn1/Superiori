#include <iostream>
using namespace std;
const int dim=4;
int v[dim], i, app, k, a, is=0, ieo;
int id=dim-1;   
main ()
{
	for (i=0;i<dim;i++)
	{
		cout<<"Inserisci un numero nel vettore =>";
		cin>>v[i];
	}
	
	
	for (i=0;i<dim-1;i++)
    {
        for (k=i+1;k<dim;k++)
        {
            if (v[k]<v[i]) 
            {
                app=v[i];
                v[i]=v[k];
                v[k]=app;
            }
        }
	}

	for (i=0;i<dim;i++)
	{
		cout<<v[i]<<"-";
	}


cout<<endl<<"quale numero si vuole ricercare?"<<endl;
cin>>a;

    
    bool found = false;
    do{

        ieo=(id+is)/2;
        if(v [ieo]==a){
            found=true;
        }else{
            if(v[ieo]>a){
                id=ieo-1;
            }else{
                is=ieo+1;
            }
        }
    }while(!found && (is<=id));


    if(found){

        cout<<"numero ricercato ha indice: "<<ieo;

    }else{
        cout<<"Numero non trovato";
    }

}


