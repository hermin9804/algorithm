#include <iostream>
using namespace std;

int	re_factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * re_factorial(n - 1));
}

int	main(void)
{
	int n;
	cin >> n;

	cout << re_factorial(n) << endl;
	return (0);
}
