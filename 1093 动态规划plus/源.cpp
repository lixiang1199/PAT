#include<iostream>
using namespace std;

int main()
{
	const int y = 1000000007;
	string s;
	cin >> s;
	int np = 0, npa = 0, npat = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'P')
		{
			np++;
			np %= y;
		}
		else if (s[i] == 'A')
		{
			npa += np;
			npa %= y;
		}
		else
		{
			npat += npa;
			npat %= y;
		}
	}
	cout << npat;
	return 0;
}