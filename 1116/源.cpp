#include<iostream>
using namespace std;

int Rank[10000] = { 0 };
int visited[10000] = {0};

bool isprime(int a)
{//                         3

	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i, j;
	int N;
	cin >> N;
	for (i =1; i <= N; i++)
	{
		cin >> j;
		Rank[j] = i;
	}
	int K;
	cin >> K;
	while (K--)
	{
		cin >> j;
		if (visited[j])
			{
				printf("%04d: Checked\n", j);
			}
		else
		{
			i = Rank[j];
			if (i == 0)
			{
				printf("%04d: Are you kidding?\n", j);
				continue;
			}
			else if (i == 1)
				printf("%04d: Mystery Award\n", j);
			else if (isprime(i))
			{
				printf("%04d: Minion\n", j);
			}
			else
			{
				printf("%04d: Chocolate\n", j);
			}
			visited[j] = 1;
		}
	}

	return 0;
}