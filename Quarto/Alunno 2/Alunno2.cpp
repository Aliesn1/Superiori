#include <iostream>
using namespace std;
struct alunno
{
	string nome;
	int eta;
	alunno *punt;
};
alunno *key;
alunno a;
main ()
{
	key=&a;
	cin>>key->nome;
	cin>>key->eta;
	key=new(alunno);
	key=&a;
	cin>>key->nome;
	cin>>key->eta;
	key=new(alunno);
	key=&a;
	cin>>key->nome;
	cin>>key->eta;
	
}
