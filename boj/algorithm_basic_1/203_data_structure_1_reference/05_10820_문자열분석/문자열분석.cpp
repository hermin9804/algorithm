#include <iostream>
#include <string>
using namespace std;

int	main(void)
{
	string str;
	while (getline(cin, str))
	{
		int low = 0, up = 0, num = 0, space = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if ('a' <= str[j] && str[j] <= 'z')
				low++;
			else if ('A' <= str[j] && str[j] <= 'Z')
				up++;
			else if ('0' <= str[j] && str[j] <= '9')
				num++;
			else if (str[j] == ' ')
				space++;
		}
		cout << low << ' ' << up << ' ' << num << ' ' << space << "\n";
	}
	return (0);
}
