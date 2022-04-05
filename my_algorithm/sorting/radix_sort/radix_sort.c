#include <stdio.h>

#define MAX 10000

void	print_arr(int *arr)
{
	for(int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

void	radix_sort(int *a, int n) 
{
	int result[MAX], maxValue = 0;
	int exp = 1;

	for (int i = 0; i < n; i++) 
		if (a[i] > maxValue) 
			maxValue = a[i];
	while (maxValue / exp > 0) 
	{
		int bucket[10] = { 0 };

		for (int i = 0; i < n; i++) 
			bucket[a[i] / exp % 10]++; 
		for (int i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];
		for(int i=n-1; i>=0;i--){
			printf("test: %d\n", bucket[a[i] / exp % 10]);
			result[--bucket[a[i] / exp % 10]] = a[i];
		}
		print_arr(result);//
		for (int i = 0; i < n; i++) 
			a[i] = result[i];
		exp *= 10;
	}
}

int	main(void)
{
	int	arr[10] = {5, 2, 6 ,1, 8, 3, 4, 7, 120, 100};

	radix_sort(arr, 10);
	for(int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
	return (0);
}
