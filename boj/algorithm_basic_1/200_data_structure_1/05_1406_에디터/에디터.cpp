#include <iostream>
#include <stack>
#include <string>
using namespace std;

int	main(void)
{
	string str;
	cin >> str;
	cin.ignore();

	stack <char> left;
	stack <char> right;
	for (int i = 0; i < str.length(); i++)
		left.push(str[i]);

	int m;
	cin >> m;
	while (m--)
	{
		char op;
		cin >> op;
		if (op == 'L')
		{
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		if (op == 'D')
		{
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}

		}
		else if (op == 'B')
		{
			if (!left.empty())
				left.pop();
		}
		else if (op == 'P')
		{
			char tmp;
			cin >> tmp;
			left.push(tmp);
		}
	}
	while (!left.empty())
	{
		if (!left.empty())
		{
			right.push(left.top());
			left.pop();
		}
	}
	while (!right.empty())
	{
		cout << right.top();
		right.pop();
	}
	cout << "\n";
	
	return (0);
}
