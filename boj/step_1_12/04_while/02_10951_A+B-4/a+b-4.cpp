#include <stdio.h>

int	main(void)
{
	int a, b;
	while (scanf("%d", &a) != -1)
	{
		scanf("%d", &b);
		printf("%d\n", a + b);
	}
	return (0);
}
