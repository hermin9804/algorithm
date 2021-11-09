#include <iostream>
#include <stack>
#include <string>

using namespace std;

int	main(void)
{
	string str;
	getline(cin, str);

	stack <char> st;

	int steel = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			st.push(str[i]);
		else
		{
			st.pop();
			if (str[i - 1] == '(')
				steel += st.size();
			else
				steel += 1;
		}
	}
	cout << steel << endl;

	return (0);
}
