#include <iostream>
using namespace std;

void	star(int i, int j, int n)
{
	if (i % 3 == 1 && j % 3 == 1)
	{
		cout << " ";
		return ;
	}
	else if (n == 1)
	{
		cout << "*";
		return ;
	}
	else
		star(i / 3, j / 3, n / 3);
}

int	main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			star(i, j, n);
		cout << "\n";
	}
	return (0);
}
