#include <stdio.h>

#define AS 10

void	counting_sort(int *arr, int size)
{
	int cnt[AS];
	int out[AS];
	int max = arr[0];

	for (int i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	for (int i = 0; i <= max; ++i)
		cnt[i] = 0;
	for (int i = 0; i < size; i++)
		cnt[arr[i]]++;
	for (int i = 1; i <= max; i++)
	  cnt[i] += cnt[i - 1];
	for (int i = size - 1; i >= 0; i--)
	{
	  out[cnt[arr[i]] - 1] = arr[i];
	  cnt[arr[i]]--;
	}
	for (int i = 0; i < size; i++)
	  arr[i] = out[i];
}

int	main(void)
{
	int	arr[AS] = {5, 2, 6 ,1, 8, 3, 4, 7, 9, 0};

	counting_sort(arr, AS);
	for(int i = 0; i < AS; i++)
		printf("%d, ", arr[i]);
	return (0);
}
