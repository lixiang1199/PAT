#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, M, a[100000];
	int i, j;
	cin >> N >> M;
	for (i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N);
	int sum;
	for (i = 0, j = N - 1; i < j;)//注意不能碰头
	{
		sum = a[i] + a[j];
		if (sum == M)
		{
			cout << a[i] << " " << a[j];
			return 0;
		}
		else if (sum < M)
			i++;
		else
			j--;
	}
	cout << "No Solution";

	return 0;
}