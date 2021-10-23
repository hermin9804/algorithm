#include <stdio.h>

int	main(void)
{
	int	n, scor, cnt;
	char	ox[80];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scor = 0;
		cnt = 1;
		scanf("%s", ox);
		for (int i = 0; ox[i]; i++)
		{
			if (ox[i] == 'O')
			{
				scor += cnt;
				cnt++;
			}
			else
				cnt = 1;
		}
		printf("%d\n", scor);
	}
	return (0);
}
