#include <cstdio>

// O(N^2) 풀이법
// (n - 1) + (n - 2) + ... + 1
// 등차수열의 등 공식 사용
// n(n - 1) / 2
int	func2(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == 100)
				return 1;
		}
	}
	return 0;
}


// O(N) 풀이법
int	func2(int arr[], int n)
{
	int tmp[100] = {0};

	for (int i = 0; i < n; i++)
	{
		if (tmp[100 - arr[i]] == 1)
			return 1;
		tmp[arr[i]] = 1;
	}
	return 0;
}

int	main()
{
	int arr[] = {49, 51};

	printf("%d\n", func2(arr, 2));
	return (0);
}