#include<iostream>
#include<string>
//#include<vector>
using namespace std;
bool a[128];
int main() {

	string s1, s2;
	cin >> s1 >> s2;

	
	int len1 = s1.length();
	int len2 = s2.length();
	for (int i = 0; i < len2; i++) {
		if (s2[i] >= 'a' && s2[i] <= 'z')
			a[s2[i] - ('a' - 'A')] = 1;//ӳ�䵽��д��
		else
			a[s2[i]] = 1;
	}
	for (int i = 0; i < len1; i++) {
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			if (!a[s1[i]-'a'+'A']) {
				cout << char(s1[i]-'a'+'A');
				a[s1[i] - 'a' + 'A'] = 1;//��־Ϊ�Ѿ������
			}
		}
		else {
			if (!a[s1[i]]) {
				cout << s1[i];
				a[s1[i]] = 1;
			}
		}
	}

	return 0;
}