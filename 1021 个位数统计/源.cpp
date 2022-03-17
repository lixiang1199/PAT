#include<iostream>
using namespace std;
int a[10];//全部从零开始
int main() {
	string b;
	int y;
	cin >> b;

	int len = b.length();
	for (int i = 0; i < len; i++) {
		a[b[i] - '0']++;//每一次的个位数，0-9 ,char转换，注意减去'0'

	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			cout << i << ":" << a[i] << endl;
		}
	}
}