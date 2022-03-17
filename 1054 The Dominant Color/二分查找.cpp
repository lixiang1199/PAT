#include<iostream>
using namespace std;
int a[166277216];//次数
int b[480000];//各个像素大小，画布
int main() {

	int M, N;
	cin >> M >> N;
	for (int i = 0; i < N * M; i++) {//lines

		cin >> b[i];//绘制画布
		a[b[i]]++;//记录像素点的次数
	}

	// more than half 即可

	for (int i = 0; i < M * N; i++) {

		if (a[b[i]] >= M * N / 2) {

			cout << b[i];
			break;

		}
			}
	return 0;
}