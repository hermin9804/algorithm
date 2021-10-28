#include <iostream>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}	
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
	return (0);
}
