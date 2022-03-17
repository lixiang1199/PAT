#include<iostream>
#include<iomanip>
using namespace std;
int a[10000];//依次记录分数

int c[1000];//记录要查询的分数
int p[100];//查询出的次数
int main() {
	int N;//学生总人数
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//依次输入学生成绩
	}
	int g;//查询个数
	cin >> g;
	 
	for (int j = 0; j < g; j++) {
		cin >> c[j];//将要查询的输入到c中
	}

	for (int k = 0; k < g; k++)//要查询的依次遍历
	{
		for (int l = 0; l < N; l++)
		{
			if (c[k] == a[l]) 
			{
				p[k]++;
			}
		}


	}
	for (int j = 0; j < g-1; j++)//到数组中的第g-1个
	{
		cout << p[j]<<" ";

	}
	cout << p[g-1];//数组当中的第g个

	return 0;
}