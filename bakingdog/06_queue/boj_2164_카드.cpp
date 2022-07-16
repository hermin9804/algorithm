#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	queue<int>	q;
	int			num;
	int			i;
	int			tmp;

	cin >> num;
	i = 1;
	while (i <= num)
	{
		q.push(i);
		++i;
	}
	i = 1;
	while (q.size() > 1)
	{
		if (i % 2 == 1)
			q.pop();	
		else
		{
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		i++;
	}
	cout << q.front() << "\n";
	return (0);
}
