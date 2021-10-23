#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[1000000];
	int	arr[26];
	int	max = 0, cnt = 0, len;
	
	for (int j = 0; j <= 26; j++)
		arr[j] = 0;
	scanf("%s", str);
	len = strlen(str);	
	for (int i = 0; str[i]; i++)
	{
		if (str[i] > 90)
			str[i] -= 32;
	}
	for (int k = 0; k < len; k++)
	{
		arr[str[k] - 65]++;
		if (arr[str[k] - 65] > max)
			max = arr[str[k] - 65];
	}
	for (int i = 0; i < 27; i++)
	{
		if (arr[i] == max)
			cnt++;
	}
	if (cnt > 1)
	{
		printf("?\n");
		return (0);
	}
	for (int i = 0; i < 27; i++)
	{
		if (arr[i] == max)
		{
			printf("%c\n", i + 'A');
			return (0);
		}
	}
	return (0);
}
