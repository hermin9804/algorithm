#include <cstdio>

int	func2(int arr[], int n)
{
	int tmp[100] = {0};

	for (int i = 0; i < n; i++)
	{
		if (tmp[100 - arr[i]] == 1)
			return (1);
		tmp[arr[i]] = 1;
	}
	return (0);
}

int	main()
{
	int arr[] = {50, 51};

	printf("%d\n", func2(arr, 2));
	return (0);
}
