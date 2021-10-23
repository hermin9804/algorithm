#include <iostream>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++)
	{
		int j;
		int key = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > key)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = key;
	}
	
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return (0);
}
