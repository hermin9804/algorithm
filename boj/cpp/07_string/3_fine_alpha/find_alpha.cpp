#include <iostream>

int	main(void)
{
	char str[101];	
	char arr[27];

	std::cin >> str;
	for (int i = 0; i < 27; i++)
		arr[i] = -1;
	arr[26] = 0;
	for (int i = 0; str[i]; i++)
	{
		if (arr[str[i] - 97] == -1)
			arr[str[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d", arr[i]);
		if (i != 25)
			printf(" ");
	}
	return (0);
}
