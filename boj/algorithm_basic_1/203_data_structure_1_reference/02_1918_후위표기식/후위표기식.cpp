#include <iostream>
#include <string>
#include <stack>
using namespace std;

int	main(void)
{
	string str;
	cin >> str;
	stack <char> op;

	for (int i = 0; i < str.length(); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			cout << str[i];
		else 
		{
			if (str[i] == '(')
				op.push(str[i]);
			else if (str[i] == '*' || str[i] == '/')
			{
				while (!op.empty() && (op.top() == '*' || op.top() == '/'))
				{
					cout << op.top();
					op.pop();
				}
				op.push(str[i]);
			}
			else if (str[i] == '+' || str[i] == '-')
			{
				while (!op.empty() && op.top() != '(')
				{
					cout << op.top();
					op.pop();
				}
				op.push(str[i]);
			}
			else if (str[i] == ')')
			{
				while (!op.empty() && op.top() != '(')
				{
					cout << op.top();
					op.pop();
				}
				op.pop();
			}
		}
	}
	while (!op.empty())
	{
		cout << op.top();
		op.pop();
	}
	return (0);
}
