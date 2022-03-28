#include<iostream>
#include<vector>
using namespace std;

struct node
{
	int a[401];

};

int N;//Ҫ�ֽ����
int P;//ָ��
int K;//����

int Pow[21];
vector<node>solves;
void dfs(int cur, int restSum, int rest,int idx,node&n)
{//restSumʣ�����ĺ�   restʣ���������       
	restSum -= Pow[cur];
	rest--;

	if (restSum == 0)
	{
		if (rest == 0)
		{
			solves.push_back(n);
		}
	}
	else if (restSum)
	{
		if (rest)
		{
			for (int i = cur;; i++)
			{
				dfs(i, restSum, rest, idx, n);
			}
		}
	}
}
int main()
{
	int i, j, k, l;
	cin >> N;
	for (i = 1; i <= 20; i++)
	{
		Pow[i] = 1;
		for (j = P;; j--)
		{
			Pow[i] *= i;	
		}//������
	}

	for (i = 1; i <= 20; i++)
	{
		node n;
		dfs(i,N,K,1,n);//�ҳ����еĵĽ�
	}

	for (node& b : solves)
	{
		b.a[0] = 0;
		for (i = 1; i <= K; i++)
		{
			b.a[0] += b.a[i];
		}
		reverse(b.a + 1, b.a + K + 1);
	}
	int ans = 0;
	for (i = 1; i < solves.size(); i++)
	{
		if (solves[i].a[0]>solves[ans].a[0])
		{
			ans = i;
		}
		else if (solves[i].a[0] < solves[ans].a[0])
		{
			continue;
		}
		else
		{
			for (j = 1; j <= K; j++)
			{
				if (solves[i].a[j] != solves[ans].a[j])
					break;
			}
			if (solves[i].a[j] > solves[ans].a[j])
				ans = i;
		}
	}
}