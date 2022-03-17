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

	int max = -1, t;
	for (int i = 0; i < 66277216; i++) {
		if (a[i] > max) {
			max = a[i];//找出次数最大的像素点
			t = i;
		}
	}
	cout << t;

	return 0;
}

