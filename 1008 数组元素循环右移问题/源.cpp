#include<iostream>
using namespace std;
int main() {
	int n, m;
	int a[200];//双倍大小
	cin >> n >> m;
	m %= n;//防止m比n还大
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n-1; i >0; i--) {
		a[i + m] = a[i];//全体向后移动
	}
	for (int i = 0; i < m; i++) {
		a[i] = a[i + n];//填充最前面几个
	}
	cout << a[0];
	for (int i = 1; i < n; i++) {
		cout << " " << a[i];
	}




}
