#include<iostream>
#include<iomanip>
using namespace std;
int z;
int main() {
	int M;//M 个待检测的、不超过 1000 的正整数。
	cin >> M;
	int k;//待测数
	int p;//乘积结果
	for (int i = 0; i < M; i++)//M个中一个一个地做
	{
		cin >> k;

		for (int N = 1; N < 10; N++)
		{
			p = N * k*k;
			if (p % 10000 == k  || p % 1000 == k|| p % 100 == k  || p % 10 == k ) {
				cout << N << " " << p;
				z++;
				break;

			}
			
		}
		if (z == 0) {
			cout << "No";//注意大小写

		}
		z = 0;
		if (i < M - 1) { cout << endl; }
	}
	


	return 0;

}