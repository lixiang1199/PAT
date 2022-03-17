#include<iostream>
using namespace std;
int book[256];
int main() {

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		book[a[i]]++;//记录每个字符出现的次数
	}

	int lose = 0;//少了多少字符
	bool flag = 0;//分两种情况
	for (int i = 0; i < b.length(); i++) {
		book[b[i]]--;//减去已有的
	}
	for (int i = 0; i < 256; i++) {
		if (book[i] < 0) {//少了的
			lose -= book[i];
			flag = 1;
		}
	}
	if (flag) {
		cout << "No " << lose;

	}

	else
		cout << "Yes " << a.length() - b.length();



}