#include <math.h>
class rettangolo
{
	private:
		double b,h;
	
	public:
		rettangolo (double a, double c)
		{
			b=a;
			h=c;
			
		}
		double area()
		{
			return(b*h);
		}
		
		double perimetro ()
		{
			return ((b+h)*2);
			
		}
		double diagonale ()
		{
			double a;
			a=sqrt((b*b)+(h*h));
			return a;
		}
		
};
