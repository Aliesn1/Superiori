class quadrato
{
	private: 
			double l;
	
	public:
			void set_lato(double a)
			{
				l=a;
			}
			
			double get_lato ()
			{
				return l;
			}
			
			double perimetro ()
			{
				return l*4;
			}
			
			double area ()
			{
				return l*l;
			}
};
