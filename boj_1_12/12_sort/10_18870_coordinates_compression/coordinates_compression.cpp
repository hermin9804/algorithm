#include <cstdio>

int	main(void)
{
	int n;
	scanf("%d", &n);

	int *arr = new int[n];
	int *ret = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		ret[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] > arr[j])
				ret[i] += 1;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", ret[i]);
	return (0);
}
