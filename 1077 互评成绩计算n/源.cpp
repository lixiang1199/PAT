#include<iostream>
using namespace std;
int sum[100];
int g[100];
int ji[100];
int main1() {
	int N;//分组数
	cin >> N;
	int M;//满分
	cin >> M;
	int a[100][100];
	
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		int max = 0;
		int min = 100;
		int tempmax=0;
		int tempmin=0;
		for (int j = 0; j < N; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				tempmax = j;
		}
			if (a[i][j] < min) {
				min = a[i][j];
				tempmin = j;
			}
			if (j == N - 1) {
				a[i][tempmax] = -1;
				a[i][tempmin] = -1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		
		for (int j = 1; j < N; j++) {
			if (a[i][j] >= 0 && a[i][j] <= M) {
				sum[i] += a[i][j];
				ji[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (ji[i] != 0) {
			sum[i] /= ji[i];
		}
		for (int j = 0; j < N; j++) {
			g[i] = a[i][0]/2+sum[i]/ 2;
		}
	}
	for (int k = 0; k < N; k++) {
		cout << int(g[k]+0.5) << endl;
	}

}