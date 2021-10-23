#include <iostream>
using namespace std;

int	main(void)
{
	int t;
	int k, n, sum;
	int ap[2][15];
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		for (int j = 0; j < 2; j++)
		{
			for (int s = 0; s < 15; s++)
				ap[j][s] = s;
		}
		for (int a = 0; a < k; a++)
		{
		       for (int j = 1; j <= n; j++)
		       {
			       sum = 0;
			       for (int s = 1; s <= j; s++)
				       sum += ap[0][s];
			       ap[1][j] = sum;
		       }
		       for (int j = 1; j <= n; j++)
			       ap[0][j] = ap[1][j];
		}
		cout << ap[0][n] << endl;
	}
	return (0);
}
