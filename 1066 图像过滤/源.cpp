#include<iostream>
//#include<iomanip>
using namespace std;
int M;//行数
int N;//列数
int A, B;//区间端点
int C;//指定的替换灰度值
int D[500][500];//像素存储 要足够大才不会有段错误
int main() {

	cin >> M >> N;
	cin >> A >> B >> C;
	for (int i = 0; i < M; i++)
	{

		for (int j = 0; j < N; j++)
		{
			cin >> D[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{

		for (int j = 0; j < N; j++)
		{
			if (D[i][j] >= A && D[i][j] <= B) {
				D[i][j] = C;
			}


			if (D[i][j] < 10) {
				cout << "00";
			}
			if (D[i][j] < 100 && D[i][j] >= 10) {
				cout << "0";
			}

			cout << D[i][j];

			if (j + 1 < N) { cout << " "; }
		}
		if (i + 1 < M) { cout << endl; }
	}

	//循环嵌套过多会导致超时，拆成两个循环，运行时间明显减少


	return 0;

}