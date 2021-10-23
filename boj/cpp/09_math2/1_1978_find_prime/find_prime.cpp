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
	for (long long i = 3; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int	main(void)
{
	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (is_prime(x))
			cnt++;
	}
	cout << cnt << endl;
	return (0);
}
