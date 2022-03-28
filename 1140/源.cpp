//1 
//11
//12
//1121
//122111
//112213
//12221131
//1123123111
#include<iostream>
#include<string>
using namespace std;

int D, N;

int main()
{
	cin >> D >> N;
	string s = to_string(D);
	
	for (int i = 2; i <= N; i++)
	{      string t;
		for (int j = 0,k; j < s.size(); )
		{
			for (k = j; k < s.size() && s[k] == s[j]; k++);
			t += s[j];
			t += to_string(k - j);
			j = k;
		}
		s = t;//不赋值给s s[k]==s[j]判断无效
	}

	cout << s;

	return 0;
}