 #include <iostream>
 using namespace std;
 const int dim=10;
 int v[dim],sp,sd;
 unsigned int i;
 main ()
 {
 	sp=0;
 	sd=0;
 	for (i=0;i<dim;i++)
 	{
 		cin>>v[i];
 		
 		if (v[i]%2==0)
 		{
 			sp=sp+v[i];	
 			
		}
 		else
 		{
 			sd=sd+v[i];	
		}
 		
	}
 	
 	if (sp>sd)
 	{
 		cout<<"Gli elementi pari sono di piu'";
 		
	}
 	
 	else
 	{
 		cout<<"Gli elementi dispari dono di piu'";
	}
 	
 }
