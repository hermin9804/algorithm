#include <iostream>
using namespace std;

int	is_prime(long long n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	for (long long i = 3; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int	main(void)
{
	int x, y, min = 10000, sum = 0, cnt = 0;
	cin >> x >> y;

	for (int i = x; i <= y; i++)
	{
		if (is_prime(i))
		{
			sum += i;
			min = min > i ? i : min;
			cnt++;
		}

	}
	if (cnt == 0)
		cout << -1 << endl;
	else
		cout << sum << "\n" << min << endl;
	return (0);
}

