#include <iostream>

int	main(void)
{
	char num[101];
	int n, sum = 0;
	std::cin >> n >> num;
	for (int i = 0; num[i]; i++)
		sum += num[i] - '0';
	std::cout << sum << std::endl;
	return (0);
}
