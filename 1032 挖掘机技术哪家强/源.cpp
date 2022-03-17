#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num;//学校编号
	int b[10000];//储存学校总分
	int a[10000];//储存分数
	
	for (int i = 0; i < n+100; i++) {
		b[i] = 0;
	}
	//分数从零往上加
	for (int i = 0; i < n; i++)
	{
		cin >> num>>a[i];
		
		b[num] += a[i];//同一所学校的分数相加
	}
	
	int max = 0;//分数最高
	int ne = 0;//最高的编号
	for (int i = 1; i < n+10; i++) 
	{
		
		if(b[i] >=max) 
		{
			max = b[i];
			ne = i;//找出最高分的学校编号
		}
	}
	cout << ne << " " << max;

	return 0;
}
//有段错误和答案错误