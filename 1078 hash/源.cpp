#include<iostream>
#include<math.h>
using namespace std;

//prime 质数

int M, N;

bool isprime(int p)//判断质数
{

	if (p == 1)
		return 0;
	for (int i = 2; i * i <= p; i++)
	{
		if (p % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i, j, k, l;
	int data[2000] = { 0 };
	cin >> M >> N;
	while (!isprime(M))
		M++;
	for (l = 0; l < N; l++)
	{
		//读取
		//尝试插入
		for (j = 0; j < M; j++)
		{
			cin >> i;
			k = (i + j * j) % M;
			if (data[k] == 0)//没有数据，空闲
			{
				data[k] = i;
				if (l)cout << " ";
				cout << k;
				break;
			}
			else
			{
				continue;
			}
		}
		if (j == M)
		{
			if (l)cout << " ";
			cout << "-";
		}
	}

}