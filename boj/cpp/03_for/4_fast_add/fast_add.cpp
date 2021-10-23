#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int t, a, b;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
	return (0);
}
