#include<iostream>
using namespace std;
int main() {
	int a, b, c,d;
	cin >> a >> b>>d;
	c = a + b;
	int s[100];
	int i = 0;
	if (c == 0) { cout << 0; }//c等于0时的情况
	while (c) {
		s[i++] = c % d;
		c /= d;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << s[j];
	}
}