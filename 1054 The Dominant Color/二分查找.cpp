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

	// more than half ����

	for (int i = 0; i < M * N; i++) {

		if (a[b[i]] >= M * N / 2) {

			cout << b[i];
			break;

		}
			}
	return 0;
}