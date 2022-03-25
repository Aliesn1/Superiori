#include <math.h>
class euclidea
{

	private:
		double x1, x2;
	public:
		void set_x1(double a)
		{
			x1=a;
		}
		void set_x2 (double a)
		{
			x2=a;
		}
		double get_x1()
		{
			return (x1);
		}
		double get_x2()
		{
			return (x2);
		}
		double distanza ()
		{
			return (sqrt((x1-x2)*(x1-x2)));
		}
};
