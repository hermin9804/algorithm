#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int numbers[10] = { 0 };
	int max = 0;
	string num;

	cin >> num;

	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == '9')
			numbers[6]++;
		else
			numbers[num[i] - '0']++;
	}
	if (numbers[6] % 2 == 0)
		numbers[6] /= 2;
	else
		numbers[6] = numbers[6] / 2 + 1;
	for (int i = 0; i < 10; i++)
		if (numbers[i] > max)
			max = numbers[i];
	cout << max;
}
