#include <iostream>
#include <algorithm>
using namespace std;

int	main(void)
{
	string str;
	cin >> str;
	string s_arr[1000];
	int len = str.length();
	for (int i = 0; i < len; i++)
		s_arr[i] = str.substr(i, len);
	sort(s_arr, s_arr + len);
	for (int i = 0; i < len; i++)
		cout << s_arr[i] << endl;
	return (0);
}
