#include <iostream>
using namespace std;

int	main(void)
{
	int n, m;
	cin >> n >> m;
	
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int max = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum > max && sum <= m)
					max = sum;
			}
		}
	}
	cout << max << '\n';
	delete[] arr;
	return (0);
}
