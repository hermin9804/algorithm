#include <iostream>

int	one_num(int num)
{
	int term, tmp;

	if (num < 100)
		return (1);
	term = num % 10 - (num / 10) % 10;
	while (num > 9)
	{
		tmp = num % 10 - (num / 10) % 10;
		num /= 10;
		if (tmp != term)
			return (0);
	}
	return (1);
}

int	main(void)
{
	int n, cnt = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (one_num(i))
			cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}
