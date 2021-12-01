#include <iostream>
using namespace std;

int	main(void)
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	a += b;
	c += d;

	cout << stoll(a) + stoll(c) << endl;
	return (0);
}
