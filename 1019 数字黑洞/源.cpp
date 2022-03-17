#include<iostream>
#include<iomanip>
using namespace std;
int a[4];//存储
int b[4];//大
int c[4];//小
int temp;//中转

int s1;
int s2;
int en = 0;
int main() {
	int N;
	cin >> N;

start:
	if (en++ != 0) {
		cout << endl;
	}
	a[0] = N / 1000;
	a[1] = (N - a[0] * 1000) / 100;
	a[2] = (N - a[0] * 1000 - a[1] * 100) / 10;
	a[3] = N - a[0] * 1000 - a[1] * 100 - a[2] * 10;
	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == a[0]) {
		cout << a[0] << a[0] << a[0] << a[0] << " - " << a[0] << a[0] << a[0] << a[0] << " = 0000";

	}
	else {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++) {
				if (a[j + 1] > a[j]) {
					temp = a[j + 1];
					a[j + 1] = a[j];
					a[j] = temp;
				}
			}

		}
		for (int i = 0; i < 4; i++)
			b[i] = a[i];//最大数字

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (a[j + 1] < a[j]) {
					temp = a[j + 1];
					a[j + 1] = a[j];
					a[j] = temp;
				}
			}
		}

		for (int i = 0; i < 4; i++)
			c[i] = a[i];//最小数字


		s1 = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
		s2 = c[0] * 1000 + c[1] * 100 + c[2] * 10 + c[3];
		int s3 = s1 - s2;

		if (s1 < 1000) { cout << "0"; }
		if (s1 < 100) { cout << "0"; }
		if (s1 < 10) { cout << "0"; }
		cout << s1 << " - ";
		if (s2 < 1000) { cout << "0"; }
		if (s2 < 100) { cout << "0"; }
		if (s2 < 10) { cout << "0"; }
		cout << s2 << " = ";
		if (s3 < 1000) { cout << "0"; }
		if (s3 < 100) { cout << "0"; }
		if (s3 < 10) { cout << "0"; }
		cout << s3;


		if (s3 != 6174) {
			N = s3;
			goto start;
		}
	}
	return 0;
}
