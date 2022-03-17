#include<iostream>
using namespace std;
int a[10];//全部从零开始
int main1() {

	int b, y;
	cin >> b;
	while (b) {
		y = b % 10;//每一次的个位数，0-9
		a[y]++;
		b /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			cout << i << ":" << a[i] << endl;
		}
	}
	return 0;
}