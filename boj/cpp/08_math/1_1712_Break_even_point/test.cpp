#include <stdio.h>

int	main(void)
{
	int a, b, c;
	long long i = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
	{
		printf("-1\n");
		return (0);
	}
	else
	{
		while (a + b * i >= c * i)
		       i++;	
		printf("%d\n", i);
		return (0);
	}
}
