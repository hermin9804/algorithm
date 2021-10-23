#include <iostream>
using namespace std;

int	main(void)
{
	int t;
	int h, w, n, ret;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		if (n % h == 0)
			ret = h * 100 + (n / h);
		else
			ret = (n % h) * 100 + (n / h) + 1;
		cout << ret << endl;
	}
	return (0);
}
