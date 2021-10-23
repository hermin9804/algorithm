#include <stdio.h>

int	main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%0.9f", (double)a/b);
	return (0);
}
