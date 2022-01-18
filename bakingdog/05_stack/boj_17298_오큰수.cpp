#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int arr[1000001];
int ans[1000001];
int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= arr[i]) 
			s.pop();
		if (s.empty())
			ans[i] = -1;
		else
			ans[i] = s.top();
		s.push(arr[i]);
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << ' ';
}
