#include <stdio.h>

int	self_num(int num)
{
	int	ret;
	
	ret = 0;
	if (num > 0)
	{
		ret += self_num(num / 10);
	}
	ret += num % 10;
	return (ret);
}


int	is_self_num(int num)
{
	int tmp;

	for (int i = 0; i < num; i++)
	{
		tmp = i;
		tmp = i + self_num(i);
		if (tmp == num)
			return (0);
	}
	return (1);
}

int	main(void)
{
	for (int i = 1; i < 10000; i++)
	{
		if (is_self_num(i))
			printf("%d\n", i);
	}
	return (0);
}
