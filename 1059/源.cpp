#include<iostream>
using namespace std;

int main()
{
	int N, i, j, k;
	cin >> N;
	if (N == 1)
	{
		cout << "1==1";
		return 0;
	}
	int start = 0;
	for (i = 2;i*i<=N; i++)
	{
		j = 0;
		while (N % i == 0)
		{
			j++;
			N /= i;
		}
		//j表示次数

	}
	if (j)
	{
		if (start)
		{
			cout << "*";
		}
		else
		{
			start = 1;
		}
		cout << i;
		if (j > 1)
			cout << "^" << j;

	}
	if (N > 1)
	{
		if (start)
			cout << "*";
		else
			start = 1;
	}
}