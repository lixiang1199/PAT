#include<iostream>
using namespace std;
int sum[1000];
int main() {
	int n;//�±���������������Ĭ���±������ 1 �� N ��ţ�
	int m;//����ͳ�Ƶĳ�������
	cin >> n >> m;
	int zuida[100];
	int a[100][1000];//m n
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			sum[j] += a[i][j];
		}
	}
	int max = -1;
	int temp;
	for (int j = 0; j < n; j++) {
		if (sum[j] > max) {
			max = sum[j];
			temp = j;
		}
	}
	int c = 0;
	bool flag = 0;
	for (int j = 0; j < n; j++) {
		if (sum[j] == max) {

			zuida[c++] = j;
		}
	}
	if (c > 1) { flag = 1; }

	cout << max << endl;
	if (flag) {
		for (int i = 0; i < c - 1; i++) {
			cout << zuida[i] + 1 << " ";
		}
		cout << zuida[c - 1] + 1;
	}
	else
		cout << temp + 1;//�����±�ȫ��Ҫ��1



}