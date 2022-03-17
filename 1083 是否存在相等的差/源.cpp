#include<iostream>
#include<iomanip>
using namespace std;
int a[10000];//储存牌上的数
int b[10000];//正面的数字
int c[10000];//差值
int d[10000];//记录差值的次数
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//记录牌号

	}
	for (int i = 0; i < N; i++) {
		b[i] = i + 1;
		//cout << a[i] << "&" << b[i] << endl;
	}//正面的数字，从1 开始赋值


	for (int i = 0; i < N; i++) {
		c[i] = abs(a[i] - b[i]);
		d[c[i]]++;

	}
	int t = 0;
	for (int i = 0; i < N; i++) {
		if (d[i] > 1) { t++; }
	}

	for (int i = 10000; i >= 0; i--) {//考虑差值为0的情况（得到 N 个非负差值，其中是否存在相等的差？）0也可以
		if (d[i] > 1) {
			cout << i << " " << d[i];
			if (t > 1) { cout << endl; t--; }
		}

	}







	return 0;

}
