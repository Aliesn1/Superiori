#include <iostream>
using namespace std;
struct alunno
{
	string nome;
	int eta;
	alunno *next;
};
main ()
{
	alunno *inizio;
	alunno *a=new(alunno);
	alunno *b=new(alunno);
	alunno *c=new(alunno);
	inizio=a;
	cout<<"nome=>";cin>>a->nome;
	cout<<"eta'=>";cin>>a->eta;
	a->next=b;
	cout<<"nome=>";cin>>b->nome;
	cout<<"eta'=>";cin>>b->eta;
	b->next=c;
	cout<<"nome=>";cin>>c->nome;
	cout<<"eta'=>";cin>>c->eta;
	c->next=NULL;
	cout<<endl<<endl;
	cout<<"Nome"<<inizio->nome<<endl;
	cout<<"Eta'"<<inizio->eta<<endl;
	inizio=inizio->next;cout<<endl<<endl;
	cout<<"Nome"<<inizio->nome<<endl;
	cout<<"Eta'"<<inizio->eta<<endl;
	inizio=inizio->next;cout<<endl<<endl;
	cout<<"Nome"<<inizio->nome<<endl;
	cout<<"Eta'"<<inizio->eta<<endl;
	inizio=inizio->next;cout<<endl<<endl;
	
	
}


