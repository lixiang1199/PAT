#include<iostream>
using namespace std;

int a_[300],b_[300] = { 0 };
int* a = a_ + 150, * b = b_ + 150;

void putsto(string s, int* digit)
{
	int i;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == '.')
			break;
	}
	if (i == s.size())
	{
	}
	else
	{

	}

}

int main()
{
	int N;
	string s1, s2;
	cin >> N >> s1 >> s2;

	putsto(s1, a);
	putsto(s2, b);

}

//31415.926
//01234 5678
//43210 -1,-2,-3