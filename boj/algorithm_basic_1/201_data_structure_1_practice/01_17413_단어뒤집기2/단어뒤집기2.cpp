#include <iostream>
#include <string>
#include <stack>
using namespace std;

int	main(void)
{
	string str;
	getline(cin, str);
	str += ' ';

	stack <char> st;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			cout << ' ';
		}
		else if (str[i] == '<')
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			while (true)
			{
				cout << str[i];
				if (str[i] == '>')
					break;
				++i;
			}
		}
		else
			st.push(str[i]);
	}
	cout << "\n";
	return (0);
}
