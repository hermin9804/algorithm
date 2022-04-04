#include <stdio.h>
#include <stdlib.h>

int	tmp[10];

void 	merge(int *arr, int start, int mid, int end)
{
	int i, j, k;

	i = start;
	j = mid + 1;
	k = start;

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
			tmp[k++] = arr[i++];
		else
			tmp[k++] = arr[j++];
	}
	if (i > mid)
		for (int t = j; t <= end; t++)
			tmp[k++] = arr[t];
	else
		for (int t = i; t <= mid; t++)
			tmp[k++] = arr[t];
	for (int t = start; t <= end; t++)
		arr[t] = tmp[t];
}

void	merge_sort(int *arr, int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(arr, start, mid);
		merge_sort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

int	main(void)
{
	int	arr[10] = {5, 2, 6 ,1, 8, 3, 4, 7, 9, 0};

	merge_sort(arr, 0, 9);
	for(int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
	return (0);
}

