//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//unordered_map<string, int>M;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	//不管有没有空格把这行都读完
//	for (char& c : s)
//		c = tolower(c);//全部改成小写
//
//	int i, j, k;
//	int isalphanum[128] = { 0 };//辨认字符
//	
//	for (i = '0'; i <= '9'; i++)
//		isalphanum[i] = 1;
//	for (i = 'a'; i <= 'z'; i++)
//		isalphanum[i] = 1;
//	for (i = 'A'; i <= 'Z'; i++)
//		isalphanum[i] = 1;
//
//
//	int preferword_times = 0;
//	string preferword;
//	for (i = 0; i < s.size();)
//	{
//		while (i < s.size() && isalphanum[s[i]] == 0)
//			i++;     
//		//跳过不需要记录的字符
//		if (i == s.size())
//			break;//遍历完退出
//		//j为结尾
//		for (j = i + 1; j < s.size()&& isalphanum[s[j]] == 1;j++)
//		{
//			//i~j - 1;
//			string temp = s.substr(i, j - 1);
//			M[temp]++;
//			k = M[temp];
//
//			if (k > preferword_times || (k == preferword_times && temp < preferword))
//			{
//				preferword_times = k;
//				preferword = temp;
//			}
//			i = j;
//		}
//		cout << preferword << " " << preferword_times;
//	}
//
//}

#include<iostream>
#include<map>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string s, t;
	getline(cin, s);
	map<string, int>m;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalnum(s[i]))
		{
			s[i] = tolower(s[i]);
			t += s[i];//不断补充该字符串
		}
		if (!isalnum(s[i]) || i == s.length() - 1)
		{//到了空格或者标点符号（字母数字外） 或者 
			if (t.length() != 0)
				m[t]++;
			t = "";
		}
	}
	int maxn = 0;
	for (auto it = m.begin(); it != m.end(); it++)
	{
		if (it->second > maxn)
		{
			t = it-> first;
			maxn = it->second;
		}
	}
	cout << t << " " << maxn;
	return 0;
}