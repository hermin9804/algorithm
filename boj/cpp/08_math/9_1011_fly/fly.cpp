#include <iostream>
using namespace std;

int	sum_tab(int *move, int depth)
{
	int sum = 0;
	for (int i = 0; i < depth; i++)
		sum += move[i];
	return (sum);
}

void	move_dfs(int *move, int depth, int len, int &count)
{
	int i = 0;

	if ((depth == len || len == sum_tab(move, len)))
	{
		if (count > depth && move[depth - 1] == 1)
			count = depth;
		return ;
	}
	while (i < len)
	{
		if (move[depth - 1] - 1 == i || move[depth - 1] == i || move[depth - 1] + 1 == i)
		{
			move[depth] = i;
			move_dfs(move, depth + 1, len, count);
			move[depth] = 0;
		}
		i++;
	}
}

int	main(void)
{
	int t, x ,y;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		int len = y - x;
		int *move = new int[len];
		move[0] = 1;
		for (int j = 1; j < len; j++)
			move[j] = 0;
		int count = len;
		move_dfs(move, 1, len, count);
		cout << count << endl;
		delete[] move;
	}
	return (0);
}
