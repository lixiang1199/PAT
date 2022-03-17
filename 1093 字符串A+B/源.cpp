#include<iostream>
#include<iomanip>
#include<cstring>
#include <string>
using namespace std;
int asc[128];

int main() {
	string a, b;
	getline(cin, a);//使用cstring 和string 头文件
	getline(cin, b);
	string c = a + b;
	int len = c.length();
	for (int i = 0; i < len; i++) {
		//依次输出string内的字符用 cout << c[i] << endl;
		asc[c[i]]++;
		if (asc[c[i]] == 1) {//第一次输出，之后再也不输出
			cout << c[i];
		}

	}
	return 0;
}