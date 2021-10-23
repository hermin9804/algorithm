#include <iostream>
#include <cmath>
using namespace std;

int	main(void)
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		if (d == 0 && r1 == r2)
			cout << -1 << endl;
		else if (d > r1 + r2 || d < abs(r1 - r2))
			cout << 0 << endl;
		else if (d == r1 + r2 || d == abs(r1 - r2))
			cout << 1 << endl;
		else if (d < r1 + r2)
			cout << 2 << endl;
	}
	return (0);
}
