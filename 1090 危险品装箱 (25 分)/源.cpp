#include<iostream>
using namespace std;

int main() {

	int N;//�ɶԵĲ�������Ʒ�Ķ���
	int M;//�Ǽ�װ���Ʒ�嵥�ĵ���

	cin >> N >> M;

	int K;//��Ʒ����

	cin >> K;

	int incompatible[100][2];//pair

	for (int i = 0; i < N; i++) {
		for (int single = 0; single <= 1; single++) {
			cin >> incompatible[i][single];
		}
	}//�����в�������Ʒ������
	int t,obj[4];
	for (int i = 0; i < M; i++) {
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> obj[j];
		}
		for (int k = 0; k < M; k++) {
			for (int p = 0; p < N; p++) {
				if (obj[k]==)
			}
		}
		

	}

	



}