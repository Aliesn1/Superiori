#include <iostream>
using namespace std;
void scambio (int *pa, int *pb)
{
	int app;
	app=*pa;
	*pa=*pb;
	*pb=app;
}
main ()
{
	int x=5;
	int y=7;
	int *px;
	int *py;
	px=&x;
	py=&y;
	scambio (px,py);
	cout<<*px<<endl;
	cout<<*py;
}
