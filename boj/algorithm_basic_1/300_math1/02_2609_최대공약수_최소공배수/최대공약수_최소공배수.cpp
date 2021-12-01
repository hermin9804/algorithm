#include <iostream>

using namespace std;


int	gcd(int a, int b)
{
	int c = a % b;
	while (c)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return (b);
}

int	lcm(int a, int b)
{
	return ((a * b) / gcd(a, b));
}

int	main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n" << lcm(a, b);
	return (0);
}
