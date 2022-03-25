#include <iostream>
using namespace std;

float pasta, salmone, spinaci, mela, totale;

main ()
{
	pasta=0;
	salmone=0;
	spinaci=0;
	mela=0;
	
	cout<<"Quanti grammi di pasta hai mangiato?  ";
	cin>>pasta;
	cout<<"Quanti grammi di salmone hai mangiato?  ";
	cin>>salmone;
	cout<<"Quanti grammi di spinaci hai mangiato?  ";
	cin>>spinaci;
	cout<<"Quanti grammi di mela hai mangiato?  ";
	cin>>mela;
	
	totale=(pasta*3.65)+(salmone*1.7)+(spinaci*0.24)+(mela*0.45);
	
	cout<<"in totale hai assunto "<<totale<<" calorie";
	
}
