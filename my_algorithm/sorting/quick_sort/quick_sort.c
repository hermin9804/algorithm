#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	quick_sort(int *arr, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = start;
	i = pivot + 1;
	j = end;
	if (start >= end)
		return ;
	while (i <= j)
	{
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[j] >= arr[pivot])
			j--;
		if (i > j)
			swap(&arr[j], &arr[pivot]);
		else
			swap(&arr[i], &arr[j]);
	}
	quick_sort(arr, start, j - 1);
	quick_sort(arr, j + 1, end);
}

int	main(void)
{
	int	arr[10] = {5, 2, 6 ,1, 8, 3, 4, 7, 9, 0};

	quick_sort(arr, 0, 9);
	for(int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
	return (0);
}
