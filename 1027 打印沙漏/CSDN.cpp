#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n = 2;//定义行数，从第二行开始

	int s = 1;//累加从1开始

	int N;//题目要求给出的数字

	cin >> N;

	char c;

	cin >> c;

	while (N >= s)//输入大于s（初值1，最中间的那一个)
	{
		s += 2 * (2 * n - 1);//s加上两边所用的个数
		n++;//行数加一
	}
	//在等于时也执行了while语句，说明一定多了一行

	s -= 2 * (2 * (n - 1) - 1);//去掉多余的一行

	n -= 2;//将初始的2减去

//打印上半部分

	int a = 0;

	for (int i = n; i > 0; i--)
	{
		a++;
		for (int j = 1; j < a; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << c;
		}
		cout << endl;
	}

	//再打印正三角,不打印第一行

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << c;
		}
		cout << endl;
	}
	cout << N - s;




}