#include <stdio.h>

int	main(void)
{
	char	str[15];
	char 	c;
	int	s = 0;

	scanf("%s", str);
	for (int i = 0; str[i]; i++)
	{
		c = str[i];
		if (c == 'A' || c == 'B' || c == 'C')
			s += 3;
		else if (c == 'D' || c == 'E' || c == 'F')
			s += 4;
		else if (c == 'G' || c == 'H' || c == 'I')
			s += 5;
		else if (c == 'J' || c == 'K' || c == 'L')
			s += 6;
		else if (c == 'M' || c == 'N' || c == 'O')
			s += 7;
		else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
			s += 8;
		else if (c == 'T' || c == 'U' || c == 'V')
			s += 9;
		else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
			s += 10;
	}
	printf("%d\n", s);
	return (0);
}
