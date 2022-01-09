#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int numbers[10] = { 0 };
	int a, b, c, num;

	cin >> a >> b >> c;
	num = a * b * c;

	while (num)
	{
		numbers[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << numbers[i] << '\n';
	return (0);
}
