#include <iostream>
using namespace std;

int	main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = 1000;
	if (x > w / 2)
		min = min > (w - x) ? (w - x) : min;
	else
		min = min > x ? x : min;
	if (y > h / 2)
		min = min > (h - y) ? (h - y) : min;
	else
		min = min > y ? y : min;
	cout << min << endl;
	return (0);
}
