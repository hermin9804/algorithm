#include <iostream>
#include <queue>
using namespace std;

int	main()
{
	int n, k;
	cin >> n >> k;

	queue <int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << '<';
	for (int i = 1; !q.empty(); i++)
	{
		if (i % k != 0)
		{
			q.push(q.front());
			q.pop();
		}
		else
		{
			int tmp = q.front();
			q.pop();
			cout << tmp;
			if (!q.empty())
				cout << ", ";
		}
	}
	cout << '>';
	
	return (0);
}
