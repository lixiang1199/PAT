
#include<iostream>
#include<iomanip>
using namespace std;
int num;//学校编号
int b[100000];//储存学校总分
int a[100000];//储存分数
int temp;
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num >> a[i];

		b[num] += a[i];//同一所学校的分数相加
		temp = num;//更新编号
	}

	int max = 0;//分数最高
	int ne = temp;//最高的编号
	for (int i = 0; i < n - 1; i++)
	{

		if (b[i] >= max)
		{
			max = b[i];
			ne = i;//找出最高分的学校编号
		}
	}
	cout << ne << " " << max;

	return 0;
}
//有段错误和答案错误，加入temp解决