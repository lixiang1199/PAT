#include<iostream>
using namespace std;

int paichu[128] = { 0 };
int chosen[128] = { 0 };

int main()
{
	int i, j = 0, k;
	string s;
	cin >>k>> s;
	for (i = 0; i < s.size(); i = j)
	{
		for (j = i + 1; s[j] == s[i]; j++);//是个分号
			char c = s[i];
		//	cout << (j - i) % k << endl;
			if ((j - i) % k)//默认初始时j-i=1
				paichu[c] = 1;
	}
		for (char c : s)
		{
			if (paichu[c])continue;
			if (chosen[c])continue;
			chosen[c] = 1;
			cout << c;
		}
		cout << endl;
	

	for (i = 0; i < s.size(); )
	{
		if (chosen[s[i]])
		{
			cout << s[i];
			i += k;//跨越k个字符
		}
		else
		{
			cout << s[i];
			i++;//继续下一个字符
		}
	}

	return 0;
}