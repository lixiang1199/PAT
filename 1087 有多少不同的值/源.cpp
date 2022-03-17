#include<iostream>
#include<iomanip>
using namespace std;
int m;
int c=0;
int main() {
	int n;
	int min = -1;
	cin >> n;
	for (int i = 1; i <= n; i++) {//从1开始，到这个数  不能是从0开始，到前一个数
		m = i / 2 + i / 3 + i / 5;
		if (m > min)
		{
			min = m;
			c++;
		}
	}
	cout << c;
}