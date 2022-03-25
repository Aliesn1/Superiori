 #include <iostream>
 using namespace std;
 int i,r,g, j, mat [5] [5],c, v [25], d;
 main ()
 {
 	c=0;
 	
 		for (i=0;i<5;i++)
 		{
 		for (j=0;j<5;j++)
 		{
 			mat[i] [j]=c;
 			c++;
		}
		}
	d=0;
	i=2;
	g=1;
	c=2;
	for (g=1;g<=2;g++)
	{
		
	 	for (r=2;r>=i-g;r--)
	 	{
			v[d]=mat [r] [c];
			d++;
			
		}	
		r=r+1;
		for (c=c+1;c<=i+g;c++)
		{
			v[d]=mat [r] [c];
			d++;
		} 
		c--;
		for (r=r+1;r<=i+g;r++)
		{
			v[d]=mat [r] [c];
			d++;
		}
		r--;
		for (c=c-1;c>=i-g;c--)
		{
			v[d]=mat [r] [c];
			d++;
		}
		c++;
	}
	for (r=3;r>i-g;r--)
	 	{
			v[d]=mat [r] [c];
			d++;
			
		}
		
	for (d=0;d<25;d++)
	{
		cout<<v[d]<<" ";
	}
}	
 
