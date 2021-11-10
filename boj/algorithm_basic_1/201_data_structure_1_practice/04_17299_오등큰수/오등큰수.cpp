#include <iostream>
#include <stack>
using namespace std;

const int MAX = 1e6 + 10;

int ans[MAX];
int arr[MAX];
int cnt[MAX];

int	main(void)
{
	int n;
	cin >> n;
	stack <int> st;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		++cnt[arr[i]];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && cnt[st.top()] <= cnt[arr[i]])
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
