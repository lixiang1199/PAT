#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	/* 4
	   1 2 4 - 1   ->  -1  1  2   4
	   4
	   7 6 - 2 - 3  -> -2 -3  6   7
	   */

	int N1, N2, i, j, sum = 0;
	cin >> N1;
	vector<int>a(N1);//有效避免越界问题
	for (i = 0; i < N1; i++)
		cin >> a[i];
	cin >> N2;
	vector<int>b(N2);
	for (i = 0; i < N2; i++)
		cin >> b[i];
	
	sort(a.begin(),a.end());
	sort(b.begin(), b.end());

	for (i = j = 0; i < N1 && j < N2 && a[i] < 0 && b[j] < 0; i++, j++)
		sum += a[i] * b[j];

	for (i = N1 - 1, j = N2 - 1; i >= 0 && j >= 0 && a[i] > 0 && b[j] > 0; i--, j--)
		sum += a[i] * b[j];

	cout << sum;

	return 0;
}

