#include <iostream>
using namespace std;
struct alunno
{
	string nome;
	int eta;
	alunno *next;
};
int s;
main ()
{
	int i=1;
	alunno *inizio;
	alunno *app;
	alunno *a=new(alunno);
	inizio=a;
	cout<<"nome=>";cin>>a->nome;
	cout<<"eta'=>";cin>>a->eta;
	
	do
	{
		cout<<"Vuoi inserire un altro elemento?"<<endl<<"1)Si"<<endl<<"2)No"<<endl;
		cin>>s;
		if (s==1)
		{
			app=a;
			app->next=(a=new(alunno));
			cout<<"nome=>";cin>>a->nome;
			cout<<"eta'=>";cin>>a->eta;	
			i++;
		}
		else
		{
			a->next=NULL;
		}
		
	}while (s==1);
	
	a=inizio;
	do
	{
		cout<<"nome=>"<<a->nome<<endl;
		cout<<"eta'=>"<<a->eta<<endl;
		cout<<endl<<endl;
		a=a->next;
		i--;
	}while (i!=0);
	

	
	
}




