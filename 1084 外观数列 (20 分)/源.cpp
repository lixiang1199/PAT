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
				t += s[i] + to_string(j - i);//将括号内的数字转化为字符串

				
			}
		}
		s = t;//t即将销毁
	}
	cout << s;



}