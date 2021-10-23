#include <stdio.h>

int	main(void)
{
	int x, n = 0;
	int tab[42];

	for (int i = 0; i < 42; i++)
		tab[i] = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &x);
		tab[x % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (tab[i] != 0)
			n++;
	}
	printf("%d\n", n);
	return (0);
}
