#include<iostream>
#include<vector>
using namespace std;

vector<int>d;
bool isprime(int l, int r)
{
	long long v = 0;
	for (int i = l; i <= r; i++)
		v = v * 10 + d[i];

	if (v < 2)return 0;
	if (v == 2)return 1;
	if (v % 2 == 0)return 0;
	for (long long i = 3; i * i <= v; i += 2)
	{
		if (v % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int L, K;
	cin >> L >> K;
	d.resize(L);
	for (int i = 0; i < L; i++)
	{
		char c;
		cin >> c;
		d[i] = c - '0';
	}
	for (int i = 0; i <= L - K; i++)//¶àÒ»
	{
		if (isprime(i, i + K - 1))
		{
			for (int j = i; j < i + K; j++)
			{
				cout << d[j];

			}
			return 0;
		}
	}
	cout << 404 << endl;
	return 0;
}