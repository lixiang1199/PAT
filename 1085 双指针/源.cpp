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
	for (i = 0; i < N; i++)//��ָ��Ϊi ��0��ʼ
		for (j = i; j < N && a[j] <= a[i] * p; j++)//��ָ��Ϊj ��i��ʼ 
			if (j - i + 1 > maxlen)
				maxlen = j - i + 1;//J��iָ��ͬһ��Ҳ����len==1

	cout << maxlen;
	return 0;
}