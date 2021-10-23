#include <stdio.h>
#include <string.h>

int	is_group_word(char str[])
{
	int tab[26];
	int j = 0;

	for (int i = 0; i < 26; i++)
		tab[i] = 0;
	while (str[j])
	{
		tab[str[j] - 97]++;
		if (tab[str[j] - 97] > 1)
			return (0);
		while (str[j] == str[j + 1])
			j++;
		j++;
	}
	return (1);
}

int	main(void)
{
	int	n, cnt = 0;
	char	str[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		if (is_group_word(str))
			cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}
