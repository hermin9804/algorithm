#include <stdio.h>

int	main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int k = n - i; k > 0; k--)
			printf(" ");
		for (int j = 1; j <= i; j++)
		       printf("*");
		printf("\n");
				
	}
	return (0);
}
