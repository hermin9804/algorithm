#include <iostream>
#include <string>
#include <stack>
using namespace std;

int	main(void)
{
	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		stack <char> st;

		string sp;
		getline(cin, sp);

		for (int i = 0; sp[i]; i++)
		{
			if (sp[i] == '(' || st.empty())
				st.push(sp[i]);
			else if (st.top() == '(')
				st.pop();
		}
		if (st.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return (0);
}
