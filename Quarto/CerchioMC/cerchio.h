class cerchio
{
	private:
		double r;
	public:
		cerchio (double p)
		{
			r=p;
		}
		double area ()
		{
			return (3.13)*(r*r);
		}
		double perimetro ()
		{
			return (2)*(3.14)*(r);
		}
};
