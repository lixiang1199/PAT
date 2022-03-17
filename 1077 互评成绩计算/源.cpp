#include<iostream>
#include<iomanip>
using namespace std;
int a[100][100];//储存分数
int main() {
	int N;//组数
	int M;//满分
	int b = 0;
	
	cin >> N >> M;
	for (int b = 0; b < N; b++) {
		for (int i = 0; i < 100; i++) {//不能是100
			cin >> a[b][i];
		}
	}
}