#include <iostream>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	if (n == 1)
		return (0);
	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			cout << i << endl;
			n /= i;
		}
		else
			i++;
	}
	return (0);
}
