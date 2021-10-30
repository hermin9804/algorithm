#include <stdio.h>

int	main(void)
{
	int n, t, a, b, c;
	scanf("%d", &n);
	c = 1;
	t = 0;
	if (n < 10)
		n *= 10;
	a = n / 10;
	b = n % 10;
	t = b * 10 + ((a + b) % 10);
	while (n != t)
	{
		c++;
		if (n < 10)
			n *= 10;
		a = t / 10;
		b = t % 10;
		t = b * 10 + ((a + b) % 10);
	}
	printf("%d\n", c);
	return (0);
}
