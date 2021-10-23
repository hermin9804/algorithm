#include <stdio.h>

int	main(void)
{
	int x, n, max;

	n = 1;
	max = 1;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &x);
		if (x > max)
		{
			max = x;
			n = i;
		}

	}
	printf("%d\n%d\n", max, n);
	return (0);
}
