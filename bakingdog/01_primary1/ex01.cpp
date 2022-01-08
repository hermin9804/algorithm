int	func1(int n)
{
	int	sum;

	sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	return (sum);
}
