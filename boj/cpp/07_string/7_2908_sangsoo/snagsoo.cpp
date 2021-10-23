#include <stdio.h>
#include <string.h>

int	main(void)
{
	int a, b, i, tmp = 0;
	scanf("%d %d", &a, &b);
	for (i = 0; i < 3; i++)
	{
		tmp = tmp * 10 + a % 10;
		a /= 10;
	}
	a = tmp;
	tmp = 0;
	for (i = 0; i < 3; i++)
	{
		tmp = tmp * 10 + b % 10;
		b /= 10;
	}
	b = tmp;
	printf("%d\n", a > b ? a : b);
	return (0);
}
