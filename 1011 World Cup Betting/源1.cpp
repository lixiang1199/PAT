#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	float a[3];//一行的三个数
	char c[4] = "WTL";//最后一个0


	float sum = 1, max = 0;
	int j = -1;
	for (int p = 0; p < 3; p++) {//外层循环，三行，循环三次
		for (int i = 0; i < 3; i++) {

			cin >> a[i];
			if (a[i] > max) {
				max = a[i];
				j = i;
			}
		}
		cout << c[j] << " ";
		sum *= max;//每次乘完后立马销毁
		max = 0;//每次循环完两个值要进行初始化，否则会严重错误
		j = 0;//注意要初始化几个值
	}
	float r = (sum * 0.65 - 1) * 2;

	cout << setiosflags(ios::fixed) << setprecision(2) << r;



}