#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	double n, max = 0, sum = 0;
	double *tab;	

	scanf("%lf", &n);
	if (!(tab = (double *)malloc(sizeof(double) * n)))
		return (0);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &tab[i]);
		if (max < tab[i])
			max = tab[i];
	}
	for (int i = 0; i < n; i++)
	{
		tab[i] = tab[i] / max * 100;
		sum += tab[i];
	}
	printf("%lf\n", (double)sum / n);
	free(tab);
	return (0);
}
