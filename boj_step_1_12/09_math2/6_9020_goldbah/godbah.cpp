#include <iostream>
using namespace std;

void	goldba(int num)
{
	int i, j, m = 4, n = num;
	int *a = new int[num + 1];

	for (int k = 0; k < num; k++)
		a[k] = 0;

	for (i = 2; i <= n; i++)
		for (j = 2; i*j <= n; j++)
			a[i*j] = 1;

	int q = 0, p = 0, cha = num;
	for (i = 2; i <= num / 2; i++)
	{
		j = num - i;
		if (!a[i] && !a[j] && i + j == num)
		{
			if (cha > j - i)
			{
				q = i;
				p = j;
				cha = p - q;
			}
		}
	}
	cout << q << " " << p << '\n';
	delete[] a;
}

int	main(void)
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int num;
		cin >> num;

		goldba(num);
	}
	return (0);
}
