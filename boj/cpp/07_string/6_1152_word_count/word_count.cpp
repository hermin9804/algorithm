#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[1000000];
	int cnt = 0, i = 0, len;

	scanf("%[^\n]", str);
	len = strlen(str);
	while (i < len)
	{
		while (str[i] == ' ' && str[i])
			i++;
		if (str[i] != ' ' && str[i])
		{
			while (str[i] != ' ' && str[i])
				i++;
			cnt++;
		}
		else
			i++;
	}
	printf("%d\n", cnt);
}
