#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N, max;
	int i, j, k;
	cin >> N;
	max = sqrt(N);
	int ans_len = 1, ans_start = N;
	for (i = 2; i <= max; i++)
	{
		//���ϳ���i��Ϊ�������Ŀ�ͷ
		for (j = i, k = N; k % j == 0; j++)
		{
			k /= j;
		}
		//  ����                   //
		if (j - i > ans_len || (j - i == 1 && i < ans_start))
		{
			ans_len = j - i;
			ans_start = i;
		}


	}
	cout << ans_len << endl;
	for (i = ans_start; i < ans_start + ans_len; i++)
	{
		if (i - ans_start)cout << "*";
		cout << i;
	}
	return 0;
}