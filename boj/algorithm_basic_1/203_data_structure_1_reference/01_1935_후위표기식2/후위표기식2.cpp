#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
using namespace std;

double	calc(double a, double b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else
		return (a / b);
}

int	main(void)
{
	int n;
	cin >> n;

	string str;
	cin >> str;

	double num[101];
	stack <double> st;

	for (int i = 0; i < n; i++)
	{
		double tmp;
		cin >> tmp;
		for (int j = 0; j < str.length(); j++)
		{
			if ('A' + i == str[j])
				num[j] = tmp;
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		if ( 'A' <= str[i] && str[i] <= 'Z')
			st.push(num[i]);
		else
		{
			double b = st.top();
			st.pop();
			double a = st.top();
			st.pop();
			st.push(calc(a, b, str[i]));
		}
	}
	printf("%.2f\n", st.top());
	return (0);
}
