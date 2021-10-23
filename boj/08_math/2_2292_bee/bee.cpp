#include <iostream>

int	main(void)
{
	int n, i = 0, b = 1;

	std::cin >> n;
	if (n == 1)
	{
		std::cout << 1 << std::endl;
		return (0);
	}
	while (b < n)
	{
		b += i * 6;
		i++;
	}
	std::cout << i << std::endl;
	return (0);
}
