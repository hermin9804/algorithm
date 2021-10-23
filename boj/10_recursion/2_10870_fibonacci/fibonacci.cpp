#include <iostream>
using namespace std;

int	re_fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (re_fibonacci(n - 1) + re_fibonacci(n - 2));
}

int	main(void)
{
	int n;
	cin >> n;

	cout << re_fibonacci(n) << endl;
	return (0);
}

