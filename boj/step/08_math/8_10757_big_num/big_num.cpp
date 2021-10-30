#include <string.h>
#include <stdio.h>

void	reverse(char str[])
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
}

int	main(void)
{
	char	a[10002] = {0}, b[10002] = {0}, res[10003] = {0};
	int	i, len, sum, carry = 0;

	scanf("%s%s", a, b);
	reverse(a);
	reverse(b);
	len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

	for (i = 0; i < len; i++)
	{
		sum = a[i] - '0' + b[i] - '0' + carry;
		while (sum < 0)
			sum += '0';
		if (sum > 9)
			carry = 1;
		else
			carry = 0;
		res[i] = sum % 10 + '0';
	}	
	if (carry == 1)
		res[len] = '1';
	reverse(res);
	printf("%s\n", res);
	return (0);
}
