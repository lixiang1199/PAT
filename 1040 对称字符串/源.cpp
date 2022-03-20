#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, j, k, maxlength = 0;
	string s;
	getline(cin, s);

	for (i = 0; i < s.size(); i++)//以字符为对称轴
	{
		for (j = i, k = i; j >= 0 && k < s.size() && s[j] == s[k]; j--, k++)
		{
			if (k - j + 1 > maxlength)
				maxlength = k - j + 1;
		}
	}

	for (i = 0; i < s.size(); i++)//以字符间隙为对称轴
	{
		for (j = i, k = i + 1; j >= 0 && k < s.size() && s[j] == s[k]; j--, k++)
		{
			if (k - j + 1 > maxlength)
				maxlength = k - j + 1;
		}
	}


	cout << maxlength;
	return 0;
}