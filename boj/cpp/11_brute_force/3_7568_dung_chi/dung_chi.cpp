#include <iostream>
using namespace std;

typedef struct dung_chi
{
	int x;
	int y;
} dung_chi;

void	creat_list(dung_chi *arr)
{
	cin >> arr->x >> arr->y;
}

int	main(void)
{
	int n;
	cin >> n;

	dung_chi *arr = new dung_chi[n];

	for (int i = 0; i < n; i++)
		creat_list(&arr[i]);

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 0; j < n; j++)
		{
			if ((&arr[i])->x < (&arr[j])->x && (&arr[i])->y < (&arr[j])->y)
				cnt++;
		}
		cout << cnt << ' ';
	}
	return (0);
}
