#include<iostream>
using namespace std;
int a[10];//ȫ�����㿪ʼ
int main1() {

	int b, y;
	cin >> b;
	while (b) {
		y = b % 10;//ÿһ�εĸ�λ����0-9
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