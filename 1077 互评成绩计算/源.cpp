#include<iostream>
#include<iomanip>
using namespace std;
int a[100][100];//�������
int main() {
	int N;//����
	int M;//����
	int b = 0;
	
	cin >> N >> M;
	for (int b = 0; b < N; b++) {
		for (int i = 0; i < 100; i++) {//������100
			cin >> a[b][i];
		}
	}
}