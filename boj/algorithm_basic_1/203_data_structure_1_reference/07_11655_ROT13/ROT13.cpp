#include <iostream>
#include <string>
using namespace std;

int	main(void)
{
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (str[i] + 13 > 'Z')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z')
				str[i] -= 13;
			else
				str[i] += 13;
		}
	}
	cout << str << endl;
	
	return (0);
}
