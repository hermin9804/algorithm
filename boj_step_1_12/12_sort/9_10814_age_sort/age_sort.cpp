#include <cstdio>
#include <cstdlib>

typedef struct
{
	int	age;
	char	name[101];
}	person;

int	compare(const void *first, const void *second)
{
	person *a = (person*)first;
	person *b = (person*)second;

	if (a->age < b->age)
		return (-1);
	else if (a->age > b->age)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int n;
	scanf("%d", &n);

	person *arr = new person[n];
	for (int i = 0; i < n; i++)
		scanf("%d %s", &arr[i].age, arr[i].name);

	qsort(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);
	return (0);
}

