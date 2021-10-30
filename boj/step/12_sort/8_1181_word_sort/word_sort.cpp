#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct
{
	int	len;
	char	str[51];
}	word;

int	compare(const void *first, const void *second)
{
	word *a = (word*)first;
	word *b = (word*)second;

	if (a->len < b->len)
		return (-1);
	else if (a->len > b->len)
		return (1);
	else if (a->len == b->len)
	{
		if (strcmp(a->str, b->str) < 0)
			return (-1);
		else
			return (1);
	}
	return (0);
}

int	main(void)
{
	int n;
	scanf("%d", &n);

	word *arr = new word[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr[i].str);
		arr[i].len = strlen(arr[i].str);

		for (int j = 0; j < i; j++)
		{
			if (strcmp(arr[i].str, arr[j].str) == 0)
			{
				i -=1;
				n -=1;
				break;
			}
		}
	}

	qsort(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i].str);
	return (0);
}
