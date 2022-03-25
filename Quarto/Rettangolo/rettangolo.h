#include <math.h>
class rettangolo
{
	private:
		double b,h;
	
	public:
		set_base (double base)
		{
			b=base;
		}
		set_altezza (double alt)
		{
			h=alt;
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
