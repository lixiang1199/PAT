#include<iostream>
using namespace std;
int a[166277216];//����
int b[480000];//�������ش�С������
int main() {

	int M, N;
	cin >> M >> N;
	for (int i = 0; i < N * M; i++) {//lines

		cin >> b[i];//���ƻ���
		a[b[i]]++;//��¼���ص�Ĵ���
	}

	int max = -1, t;
	for (int i = 0; i < 66277216; i++) {
		if (a[i] > max) {
			max = a[i];//�ҳ������������ص�
			t = i;
		}
	}
	cout << t;

	return 0;
}

