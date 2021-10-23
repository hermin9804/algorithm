#include <iostream>

int	main(void)
{
	int n;
	double max = 0, sum = 0;

	std::cin >> n;
	double *tab = new double[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> tab[i];
		if (max < tab[i])
			max = tab[i];
	}
	for (int i = 0; i < n; i++)
	{
		tab[i] = tab[i] / max * 100;
		sum += tab[i];
	}
	std::cout << (double)sum / n << std::endl;
	delete[] tab;
	return (0);
}
