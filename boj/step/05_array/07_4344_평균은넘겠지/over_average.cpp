#include <stdio.h>

int	main(void)
{
	int c, n, score, cnt;
	double sum;
	double tab[1000];

	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		sum = 0;
		scanf("%d", &n);
		for (int m = 0; m < 1000; m++)
			tab[m] = 0;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score);
			tab[j] = score;
			sum += score;
		}
		sum /= n;
		cnt = 0;
		for (int k = 0; k < n; k++)
		{
			if (tab[k] > sum)
				cnt++;
		}
		printf("%.3f%%\n", (double)cnt / n * 100);
	}
	return (0);
}
