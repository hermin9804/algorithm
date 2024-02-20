#include <stdio.h>

// O(루트 n)
int	func3(int n)
{
	for (int i = 1; i*i <= n; i++)
		if (i*i == n)
			return (1);
	return (0);
}

int main() {
	printf("%d\n", func3(16));
	printf("%d\n", func3(23));
}