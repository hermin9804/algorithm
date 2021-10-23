#include <stdio.h>

int	main(void)
{
	int n, r;
	char str[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &r, str);
		for (int j = 0; str[j]; j++)
		{
			for (int k = 0; k < r; k++)
				printf("%c", str[j]);
		}
		printf("\n");
	}
	return (0);
}
