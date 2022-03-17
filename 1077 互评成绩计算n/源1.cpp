#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int g2, g1 = 0, cnt = -2, temp, maxn = -1, minn = m + 1;//cnt  -2 代表除去了最大值和最小值
		cin >> g2;//先输入老师的成绩
		for (int j = 1; j < n; j++) {//除去老师的一个
			cin >> temp;//分别输入学生给的成绩
			if (temp >= 0 && temp <= m) {//判断是否在区间
				if (temp > maxn)maxn = temp;//找出最大最小值
				if (temp < minn)minn = temp;
				g1 += temp;//不断的累加
				cnt++;//可用成绩的个数
			}
		}
		cout << int((((g1 - minn - maxn) * 1.0 / cnt) + g2) / 2 + 0.5) << endl;//总分中减去最大值最小值，	
	}//并注意四舍五入
	return 0;
}