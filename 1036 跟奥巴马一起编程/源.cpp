#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int N;//列数
	cin >> N;

	char C;
	cin >> C;

	int y = (N + 1) / 2;//行数是列数的一半，且四舍五入取整
	int i;//行数
	for (int i = 1; i <=y; i++) {

		if (i == 1 || i == y)//首尾输出所有
			for (int j = 0; j < N; j++) {
				cout << C;
			}
		//首尾行以外的其他行
		else {
			cout << C;//首
			for (int k = 0; k < N - 2; k++)//中间输出 列数-2（首尾）个
			{
				cout << " ";
			}
			cout << C;//尾
		}

		cout << endl;//每过一行输出一次空格

	}
}