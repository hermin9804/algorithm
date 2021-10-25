#include <cstdio>

int	is_num(int *arr, int n, int t)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == t)
			return (1);
	}
	return (0);
}

int	main(void)
{
	int n;
	scanf("%d", &n);

	int *arr = new int[n];
	int *ret = new int[n];
	int *tmp = new int[n];
	int t_idx = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (!is_num(arr, i, arr[i]))
		{
			tmp[t_idx] = arr[i];
			t_idx++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < t_idx; j++)
		{
			if (arr[i] > tmp[j])
				ret[i] += 1;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", ret[i]);
	return (0);
}
