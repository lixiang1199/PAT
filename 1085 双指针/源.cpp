#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, p;
	long long a[100000];
	scanf("%d%d", &N, &p);
	int i, j;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + N);
	int maxlen = 0;
	for (i = 0; i < N; i++)//左指针为i 从0开始
		for (j = i; j < N && a[j] <= a[i] * p; j++)//右指针为j 从i开始 
			if (j - i + 1 > maxlen)
				maxlen = j - i + 1;//J和i指向同一点也代表len==1

	cout << maxlen;
	return 0;
}