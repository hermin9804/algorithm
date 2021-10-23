#include <iostream>
using namespace std;

int	div_sum(int num)
{
	int sum = num;
	
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	return (sum);
}

int	main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < 1000000; i++)
	{
		if (n == div_sum(i))
		{
			cout << i << '\n';
			return (0);
		}
	}
	cout << 0 << '\n';
	return (0);
}
