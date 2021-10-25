#include <cstdio>
#include <cstdlib>

int	compare(const void *first, const void *second)
{
	int *a = (int*)first;
	int *b = (int*)second;

	if (*a > *b)
		return (-1);
	else if (*a < *b)
		return (1);
	else
		return (0);
}

int	num_len(int n)
{
	int len = 0;

	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	main(void)
{
	int n;
	scanf("%d", &n);

	int len = num_len(n);
	int *arr = new int[len];

	for (int i = 0; n; i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}

	qsort(arr, len, sizeof(arr[0]), compare);

	for (int i = 0; i < len; i++)
		printf("%d", arr[i]);
	printf("\n");
	return (0);
}

