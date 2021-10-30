#include <stdio.h>

int 	eratos(int t)
{
	int i, j, m, n, a[246913] = {0, 1}, cnt = 0;
	m = t + 1;
	n = t * 2;

	for (i = 2; i <= n; i++)
		for (j = 2; i*j <= n; j++)
			a[i*j] = 1;

	for (i = m; i <= n; i++)
		if (!a[i])
			cnt++;
	return (cnt);
}

int	main(void)
{
	int t;
	while (1)
	{
		scanf("%d" , &t);
		if (t == 0)
			break;
		else
			printf("%d\n", eratos(t));
	}
	return (0);
}
