#include <iostream>
#include <string>
using namespace std;

int	main(void)
{
	string str;
	cin >> str;

	int alpha[26] = {0};
	for (int i = 0; i < str.length(); i++)
		alpha[str[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return (0);
}
	
