 #include <iostream>
 using namespace std;
 int i,j, mat [5] [5], v[25], c, d, cont, a;
 bool booli, boolj;
 main ()
 {
 	c=0;
 	for (i=0;i<5;i++)
 	{
 		for (j=0;j<5;j++)
 		{
 			mat[i] [j]=c;
 			c++;
		}
	}
	
	for (i=0;i<5;i++)
 	{
 		for (j=0;j<5;j++)
 		{
 			//cout<<mat[i] [j];
 			
		}
	}
	
	//true=positivo, false=negativo
	//cont=1 i, cont=2 j
	//d contatore vettore
	i=2;
	j=2;
	d=0;
	a=1;
	cont=1;
	c=0;
	booli=true;
	boolj=false;
	do
	{
		
		if (cont>2)
		{
			cont=1;
			if (a<4)
			{
				a++;
			}
			
		}
		
		do
		{
			
			
			if (cont==1)
			{
					do
					{
						if (booli==true) //spostamento sulle righe
						{
							
							if (d<25)
							{
							v[d]=mat [i] [j];
							}
							
							i--;
							d++;
							c++;
							
							
						}
						
						else 			
						{
							
							if (d<25)
							{
							v[d]=mat [i] [j];
							}
						
							i++;
							d++;
							c++;
							
						}
				
					}while (c<a);
				
					if (booli==true) //cambio di segno
					{
						booli=false;
					}
					
					else 			
					{
						booli=true;
					}
				}
			
			else  //spostamento sulle colonne
			{
				do
				{
			
					if (boolj==false) //spostamento sulle righe
					{
						if (d<25)
						{
							v[d]=mat [i] [j];
						}
						j++;
						d++;
						c++;
					}
					
					else 			
					{
						if (d<25)
						{
							v[d]=mat [i] [j];
						}
						j--;
						d++;
						c++;
					}
				}while (c<a);
				
				
				if (boolj==true) //cambio di segno
				{
					boolj=false;
				}
				
				else 			
				{
					boolj=true;
				}
			
			}
			c=0;
			cont++;
			
			
		}while(cont<=2);
		
		
		
	} while (d<25);	
	
	for (d=0;d<25;d++)
	{
		cout<<v[d]<<" ";
	}
	
}	
 
 
 
 
 

