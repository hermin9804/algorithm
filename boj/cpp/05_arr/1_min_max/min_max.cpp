#include <stdio.h>

int	main(void)
{
	int n, x, min = 1000000, max = -1000000;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > max)
			max = x;
		if (x < min)
			min = x;
	}
	printf("%d %d\n", min, max);
	return (0);
}
