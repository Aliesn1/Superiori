class cerchio
{
	public:
				double r;
	public:
			void set_raggio (double a)
			{
				r=a;
			}
			
			double get_raggio ()
			{
				return r;
			}
			
			double circonferenza ()
			{
				double c;
				c=2*r*3,14;
				return c;
			}
			
			double area ()
			{
				double a;
				a=r*r*3,14;
				return a;
			}
		
};

