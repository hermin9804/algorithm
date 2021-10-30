#include <iostream>
#include <stack>
using namespace std;

int	main(void)
{
	int n, num, cnt = 1;
	cin >> n;
	stack <int> st;
	string result = "";	

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num >= cnt)
		{
			while (num + 1 != cnt)
			{
				st.push(cnt++);
				result += "+\n";
			}
			st.pop();
			result += "-\n";
		}
		else
		{
			if (st.top() == num)
			{
				st.pop();
				result += "-\n";
			}
			else
			{
				result = "NO";
				break;
			}
		}
	}
	cout << result;
	return (0);
}
