#include <stdio.h>
#include <string.h>

int	find_word(char str[], char find[8][4])
{
	int j;

	for (int i = 0; i < 8; i++)
	{
		j = 0;
		while (str[j] == find[i][j] && str[j] && find[i][j])
			j++;
		if (find[i][j] == 0)
			return (i + 1);
	}
	return (0);
}

int	main(void)
{
	char	crotia[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	char	str[100];
	int	cnt = 0, t;

	scanf("%s", str);
	for (int i = 0; i < strlen(str);)
	{
		t = find_word(&str[i], crotia);
		if (t)
		{
			cnt++;
			i += strlen(crotia[t - 1]);
		}
		else
		{
			cnt++;
			i++;
		}
	}
	printf("%d\n", cnt);
	return (0);
}
