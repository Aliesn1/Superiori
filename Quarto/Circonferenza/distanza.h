#include <math.h>
class distanza
{
	private:
		double x1=0,y1=0,x2,y2;
	public:
		
	void set_x2(double a)
	{
		x2=a;
	}
	void set_y2(double a)
	{
		y2=a;
	}
	double distanzae ()
	{
		return (sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
	}
	
};
