#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, a[10010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int sum = a[0];//第一段绳子不折
	for (int i = 1; i < n; i++)//从第二段开始折
		sum = (sum + a[i]) / 2;
	cout << sum;
	return 0;
}