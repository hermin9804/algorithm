#include <iostream>
#include <stack>
using namespace std;

int	main(void)
{
	int n;
	cin >> n;

	int ans[1000001];
	int arr[1000001];
	stack <int> st;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= arr[i])
			st.pop();

		if (st.empty())
			ans[i] = -1;
		else
			ans[i] = st.top();

		st.push(arr[i]);
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
	return (0);
}
