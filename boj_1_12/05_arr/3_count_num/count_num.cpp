#include <stdio.h>

int	main(void)
{
	int a, b, c;
	int tab[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	scanf("%d %d %d", &a, &b, &c);
	a = a * b * c;
	while (a)
	{
		tab[a % 10]++;
		a /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", tab[i]);
	return (0);
}
