#include<iostream>
using namespace std;
int a[10];//ȫ�����㿪ʼ
int main() {
	string b;
	int y;
	cin >> b;

	int len = b.length();
	for (int i = 0; i < len; i++) {
		a[b[i] - '0']++;//ÿһ�εĸ�λ����0-9 ,charת����ע���ȥ'0'

	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			cout << i << ":" << a[i] << endl;
		}
	}
}