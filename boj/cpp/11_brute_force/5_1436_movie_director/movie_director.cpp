#include <iostream>
#include <string.h>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	char num[10];
	int i = 666, cnt = 0;
	while (cnt != n)
	{
		int tmp = i;
		for (int j = 0; j < 10; j++)
		{
			num[j] = tmp % 10 + '0';
			tmp /= 10;
		}
		if (strstr(num, "666"))
			cnt++;
		i++;
	}
	cout << --i << '\n';
	return (0);
}
