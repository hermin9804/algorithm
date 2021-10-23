#include <stdio.h>

int	main(void)
{
	int a;

	scanf("%d", &a);
	if (90 <= a && a <= 100)
		printf("A\n");
	else if (80 <= a && a <= 89)
		printf("B\n");
	else if (70 <= a && a <= 79)
		printf("C\n");
	else if (60 <= a && a <= 69)
		printf("D\n");
	else
		printf("F\n");
	return (0);
}
