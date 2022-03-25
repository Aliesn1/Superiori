#include <iostream>
#include "quadrato.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	quadrato q(15);
	cout<<"perimetro= "<<q.get_perimetro()<<endl;
	cout<<"area= "<<q.get_area()<<endl;
	cout<<"diagonale= "<<q.get_diagonale()<<endl;
}
