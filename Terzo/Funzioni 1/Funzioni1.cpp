 #include <iostream>
 using namespace std;
 int mas (int a, int b, int c)
 {
 	int m;
 	m=a;
 	if (m<b)
 	{
 		m=b;
	 }
	 if (m<c)
	 {
	 	m=c;
	 }
	 return m;
 }
 int mino (int a, int b, int c)
 {
 	int mi;
 	mi=a;
 	if (mi>b)
 	{
 		mi=b;
	 }
	 if (mi>c)
	 {
	 	mi=c;	
	 }
	 return mi;
 }
 
 main ()
 {
 	int a;
 	int b;
 	int c;
 	int m;
 	int mi;
 	cin>>a;
 	cin>>b;
 	cin>>c;
 	m=mas(a,b,c);
 	cout<<"Il massimo e' "<<m<<endl;
 	mi=mino(a,b,c);
 	cout<<"Il minimo e' "<<mi;
 	
 }
