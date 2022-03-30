#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	getchar();
	string ans;
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		int lens = s.length();
		reverse(s.begin(), s.end());
		if (i == 0)    
		{
			ans = s;//先将第一个字符串放入ans中
			continue;
		}
		else
		{
			int lenans = ans.length();//更新这一次录入的字符串长度
			if (lens < lenans)
			{	//最大公共后缀不会比最短字符串长
				swap(ans, s);
			}
			int minlen = min(lens, lenans);//更新最短长度
			for (int j = 0; j < minlen; j++)//遍历长度 即 最短字符串的长度
			{
				if (ans[j] != s[j])//逐个遍历 到不同的时候裁剪
				{
					ans = ans.substr(0, j);
					break;
				}
			}
		}
	}
	reverse(ans.begin(), ans.end());//再重新转回来
	if (ans.length() == 0)
		ans = "nai";
	cout << ans;
	return 0;
}