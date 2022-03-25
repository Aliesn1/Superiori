#include <iostream>
#include "maxmin.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	maxmin k;
 	int a,b,c;
 	cin>>a;
 	cin>>b;
 	cin>>c;
 	k.set_a(a);
	k.set_b(b);
	k.set_c(c);
	int mas, mino;
	k.masmino(mas, mino);
	cout<<"Il massimo e'=>"<<mas<<endl;
	cout<<"Il minimo e' =>"<<mino;
}
