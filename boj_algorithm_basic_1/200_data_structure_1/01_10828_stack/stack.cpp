#include <iostream>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	int *stack = new int[n];
	for (int i = 0; i < n; i++)
		stack[i] = 0;
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int data;
			cin >> data;
			stack[idx] = data;
			idx++;
		}
		else if (command == "pop")
		{
			if (idx == 0)
				cout << -1 << '\n';
			else
			{
				idx--;
				cout << stack[idx] << '\n';
				stack[idx] = 0;
			}
		}
		else if (command == "size")
		{
			cout << idx << '\n';
		}
		else if (command == "empty")
		{
			if (idx == 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (command == "top")
		{
			if (idx == 0)
				cout << -1 << '\n';
			else
				cout << stack[idx - 1] << '\n';
		}
	}
	delete[] stack;
	return (0);
}
