#include <iostream>
using namespace std;

int	main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, x, tmp;
	cin >> a >> x;

	while (a--)
	{
		cin >> tmp;
		if (tmp < x)
			cout << tmp << ' ';
	}
	return 0;
}
