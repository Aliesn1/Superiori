#include <math.h>
using namespace std;
class cono: public cerchio {
	

	private: 
			double altezza;
	
	public:
			void set_altezza (double a)
			{
				altezza=a;
			}
			
			double get_altezza ()
			{
				return altezza;
			}
			
			double volume ()
			{
				return ((3,14*r*r*altezza)/3);
			}
			
			double superficie ()
			{
				double a,sl,ab;
				a=sqrt((altezza*altezza)+(r*r));
				sl=3,14*r*a;
				ab=area();
				return ab+sl;
					
			}
};
