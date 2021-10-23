#include <iostream>
using namespace std;

int	main(void)
{
	int n, cnt = 0;
	cin >> n;
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			cnt += (n / 5);
			cout << cnt << endl;
			return (0);
		}
		n -= 3;
		cnt++;
	}
	cout << -1 << endl;
	return (0);
}
