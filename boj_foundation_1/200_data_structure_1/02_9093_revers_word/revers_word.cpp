#include <iostream>
#include <string>
#include <stack>
using namespace std;

int	main(void)
{
	int	n;
	string	sentence;
	stack	<char> st;

	cin >> n;
	cin.ignore();

	while (n--)
	{
		getline(cin, sentence);
		sentence += ' ';

		for (int i= 0; i < sentence.size(); i++)
		{
			if (sentence[i] == ' ')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else
				st.push(sentence[i]);
		}
		cout << "\n";
	}
	return (0);
}

