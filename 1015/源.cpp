#include<iostream>
using namespace std;

bool isprime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int translate(string N, int r)
{
	int sum = 0;
	for (int i = N.size() - 1, unit = 1; i >= 0; i--, unit *= r)
	{
		sum += unit * (N[i] - '0');
	}
	return sum;
}

int main()
{
	int n, r;
	while (1)
	{
		cin >> n >> r;
		if (n < 0)
			break;
		if (!isprime(n))
			cout << "No\n";
		else
		{
			string N = "";
			while(n)
			{
				N += '0' + n % r;
				n /= r;
			}
			int value = translate(N, r);
			if (isprime(value))
				cout << "Yes\n";
			else
				cout << "No\n";

		}
	}
}