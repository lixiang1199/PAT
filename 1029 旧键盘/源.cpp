#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int s3[256];//记录出现过的字符
int main() {
	string s1;//键盘打字
	string s2;//实际输出
	cin >> s1 >> s2;
	for(int i=0;i<s2.length();i++)
	{
		if (s2[i] >= 'a' && s2[i] <= 'z') {//用数组访问string的各
			s2[i] += 'A' - 'a';//全部转换为大写
	}
		s3[s2[i]]=1;//记录输出

	}//记录

	for (int i = 0;i < s1.length(); i++)//验证
	{

		if (s1[i] >= 'a' && s1[i] <= 'z') {
			s1[i] += 'A' - 'a';//把字符串全部变为大写
		}

		if(s3[s1[i]]!=1)
		{
			cout << s1[i];
			s3[s1[i]] = 1;//输出后记录，表示已经被输出

		}


	}
	

	return 0;

}