class cerchio
{
	private:
		double r;
	public:
		
		double area (double a)
		{
			r=a;
			return (3.13)*(r*r);
		}
		double perimetro (double a)
		{
			r=a;
			return (2)*(3.14)*(r);
		}
};
