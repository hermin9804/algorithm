#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
		ans += a[i];
	return ans;
}

int	main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	printf("%lld\n", sum(v));
	return (0);
}
