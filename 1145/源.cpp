#include<iostream>
#include<vector>
using namespace std;

int MSize;//哈希表大小
int N;//数量 
int M;//查询次数

bool isprime(int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	cin >> MSize >> N >> M;
	while (!isprime(MSize))
	{
		MSize++;
	}
	vector<int>HASHTABLE(MSize, 0);
	int search_time = 0;
	for (int i = 0; i < N; i++)
	{
		int val;
		bool inserted = 0;
		cin >> val;
		int hash = val % MSize;
		for (int j = 0; j <= MSize; j++)
		{
			if (HASHTABLE[(hash + j * j) % MSize] == 0)
			{
				HASHTABLE[(hash + j * j) % MSize] = val;
				inserted = 1;
				break;
			}
			else
				continue;
		}
		if (!inserted)
			printf("%d cannot be inserted.\n", val);

	}


	for (int i = 0; i < M; i++)
	{
		int val;
		bool inserted = 0;
		cin >> val;
		int hash = val % MSize;
		for (int j = 0; j <= MSize; j++)
		{
			search_time++;
			if (HASHTABLE[(hash + j * j) % MSize] == 0)
			{
				break;
			}
			else if (HASHTABLE[(hash + j * j) % MSize] == val)
			{
				break;
			}
			else
				continue;
		}



	}

	printf("%.1f", double(search_time) / M);
	return 0;
}