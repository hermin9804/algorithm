#include <stdio.h>

int	main(void)
{
	int x, n, t;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &t);
		if (t < n)
			printf("%d\n", t);
	}
	return (0);
}
