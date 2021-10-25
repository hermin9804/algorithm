#include <cstdio>
#include <cmath>
#include <cstdlib>

int	compare(const void *first, const void *second)
{
	int *a = (int*)first;
	int *b = (int*)second;

	if (*a < *b)
		return (-1);
	else if (*a > *b)
		return (1);
	else
		return (0);
}

int	arith(int arr[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];
	return (round(sum / n));
}

int	median(int arr[], int n)
{
	if (n == 1)
		return (arr[0]);
	else
		return (arr[(n + 1) / 2 - 1]);
}

int	mode(int arr[], int n)
{
	int tab[8001] = {0};
	int idx, max = 0, cnt = 0;

	for (int i = 0; i < n; i++)
	{
		idx = arr[i] + 4000;
		tab[idx] += 1;

		if (tab[idx] > max)
			max = tab[idx];
	}

	idx = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (tab[i] == 0)
			continue;
		if (tab[i] == max)
		{
			if (cnt == 0)
			{
				idx = i;
				cnt += 1;
			}
			else if (cnt == 1)
			{
				idx = i;
				break;
			}
		}
	}
	return (idx - 4000);
}

int	range(int arr[], int n)
{
	return (arr[n - 1] - arr[0]);
}

int	main(void)
{
	int n;
	scanf("%d", &n);

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(arr[0]), compare);

	printf("%d\n", arith(arr, n));
	printf("%d\n", median(arr, n));
	printf("%d\n", mode(arr, n));
	printf("%d\n", range(arr, n));
	return (0);
}
		 
