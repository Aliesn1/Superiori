class contatore
{
	private:
		unsigned int k;
	public:
		void set_k (int a)
		{
			k=a;
		}
		int cont (int a)
		{
			k=a-1;
			return (k);
		}
};
