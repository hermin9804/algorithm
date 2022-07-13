#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	queue<int>	q;
	int			cnt;
	int			num;
	string		str;

	cin >> cnt;
	while(cnt--) 
	{
		cin >> str;
		if (str == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (str == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else 
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (str == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
		else if (str == "size")
			cout << q.size() << '\n';
		else if (str == "size")
			cout << q.size() << '\n';
		else if (str == "empty")
				cout << q.empty() << '\n';
	}
	return (0);
}
