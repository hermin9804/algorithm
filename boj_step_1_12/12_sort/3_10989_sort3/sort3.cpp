#include <cstdio>

int	main(void)
{
	int n;
	scanf("%d", &n);

	int arr[10001] = {0};

	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		arr[a] += 1;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	return (0);
}
