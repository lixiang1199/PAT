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
			ans = s;//�Ƚ���һ���ַ�������ans��
			continue;
		}
		else
		{
			int lenans = ans.length();//������һ��¼����ַ�������
			if (lens < lenans)
			{	//��󹫹���׺���������ַ�����
				swap(ans, s);
			}
			int minlen = min(lens, lenans);//������̳���
			for (int j = 0; j < minlen; j++)//�������� �� ����ַ����ĳ���
			{
				if (ans[j] != s[j])//������� ����ͬ��ʱ��ü�
				{
					ans = ans.substr(0, j);
					break;
				}
			}
		}
	}
	reverse(ans.begin(), ans.end());//������ת����
	if (ans.length() == 0)
		ans = "nai";
	cout << ans;
	return 0;
}