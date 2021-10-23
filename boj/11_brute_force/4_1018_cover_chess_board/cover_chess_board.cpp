#include <iostream>
using namespace std;

int	check_board(char **board, int n, int m)
{
	char chess_board_W[] = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
	char chess_board_B[] = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
	char *tmp = (board[n][m] == 'W' ? chess_board_W : chess_board_B);

	int cnt = 0, t = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i + n][j + m] != tmp[t])
				cnt++;
			t++;
		}
	}
	return (cnt);
}

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	char **board = new char *[n];
	for (int i = 0; i < n; i++)
		board[i] = new char[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int min = 32, cnt = 0;
	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			cnt = check_board(board, i, j);
			min = cnt < min ? cnt : min;
		}
	}
	cout << min << '\n';
	return (0);
}

