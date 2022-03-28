#include<iostream>
#include<string>
using namespace std;

long string_to_num(string a)
{
	long val = 0;
	for (int i = 0; i < a.size(); i++)
	{
		val = val * 10 + (a[i] - '0');
	}
	return val;
}

int main()
{

	int N;
	cin >> N;
	while (N--)
	{
		string s;
		cin >> s;
		string s1, s2;
		s1 = s.substr(0, s.length() / 2);
		s2 = s.substr(s.length() / 2, s.length());
		long i = string_to_num(s);
		long i1 = string_to_num(s1);
		long i2 = string_to_num(s2);
		if (i1 * i2 != 0 && i % (i1 * i2) == 0)
		{
			cout << "Yes\n";
		}
		else
			cout << "No\n";
	}

	return 0;
}