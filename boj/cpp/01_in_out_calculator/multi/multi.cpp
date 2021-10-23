#include <stdio.h>

int	main(void)
{
	int tmp_o, tmp_t;
	int o, t;
	scanf("%d %d", &o, &t);
	tmp_o = o;
	tmp_t = t;

	int c, b, a;
	int z, y, x;

	a = o % 10;
	o /= 10;
	b = o % 10;
	o /= 10;
	c = o;

	x = t % 10;
	t /= 10;
	y = t % 10;
	t /= 10;
	z = t;

	printf("%d\n", (a * x) + (b * x * 10) + (c * x * 100));
	printf("%d\n", (a * y) + (b * y * 10) + (c * y * 100));
	printf("%d\n", (a * z) + (b * z * 10) + (c * z * 100));
	printf("%d\n", tmp_o * tmp_t);

	return (0);
}
