class prisma: public quadrato{

	private: double h;
	
	public:
			void set_altezza (double a)
			{
				h=a;
			}
			
			double get_altezza ()
			{
				return h;
			}
			
			double volume ()
			{
				double a;
				a=area ();
				return a*h;
			}
			
			double superficie ()
			{
				double a,b;
				a=area(); a=a*2;
				b=get_lato(); b=b*h; b=b*4;
				return a+b;
			}
			
};
