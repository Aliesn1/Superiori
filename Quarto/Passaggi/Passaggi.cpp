#include <iostream>
using namespace std;
void prova (int *ptr_x, int *ptr_y)
{
	cout<<"parametri formali\n";
	cout<<"Indirizzo di ptr_x: "<<&ptr_x<<"\t puntata: "<<ptr_x<<endl;
	cout<<"Indirizzo di ptr_y: "<<&ptr_y<<"\t puntata: "<<ptr_y<<endl;
	system ("pause");
}

void prova_seconda (int &x, int &y)
{
	cout<<"Indirizzo di x: "<<&x<<endl;
	cout<<"Indirizzo di y: "<<&y<<endl;
	system ("pause");
}

int main()
{
	cout<<"Passaggio dei parametri per indirizzo..."<<endl;
	system ("pause");
	int *ptr_a;
	int *ptr_b;
	int a=12, b=-3;
	ptr_a=&a;
	ptr_b=&b;
	cout<<"Parametri attuali\n";
	cout<<"Indirizzo di ptr_a: "<<&ptr_a<<"\t puntata: "<<ptr_a<<endl;
	cout<<"Indirizzo di ptr_b: "<<&ptr_b<<"\t puntata: "<<ptr_b<<endl;
	system ("pause");
	prova (ptr_a, ptr_b);
	cout<<"Indirizzo di a: "<<&a<<endl;
	cout<<"Indirizzo di b: "<<&b<<endl;
	system ("pause");
	prova_seconda (a,b);
	return 0;
}
