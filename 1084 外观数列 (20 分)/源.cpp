#include<iostream>

#include<string>
using namespace std;

int main() {

	string s;
	int n, j;
	cin >> s >> n;
	for (int cnt = 1; cnt < n; cnt++) {
		string t;
		for (int i = 0; i < s.length(); i = j) {
			for (j = i; j < s.length(); j++) {
				if (s[j] == s[i]) { break; }
				t += s[i] + to_string(j - i);//�������ڵ�����ת��Ϊ�ַ���

				
			}
		}
		s = t;//t��������
	}
	cout << s;



}