#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int t;
	std::cin >> t;

	for (int i = 1; i <= t; i++)
		std::cout << i << "\n";
	return (0);
}
