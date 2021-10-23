#include <iostream>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	int i = 1;
	while (n > i)
	{
		n -= i;
		i++;
	}
	if (i % 2 == 1)
		cout << i + 1 - n << '/' << n << endl;
	else
		cout << n << '/' << i + 1 - n << endl;
	return (0);
}
