#include<iostream>
using namespace std;
int v[1010][1010];
bool visit[1010];
int n;
void dfs(int curcity)
{
	visit[curcity] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 0 && v[curcity][i] == 1)
		{
			dfs(i);
		}
	}
}

int main()
{
	int m, k, a, b;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		v[a][b] = v[b][a] = 1;
	}
	for (int i = 0; i < k; i++)
	{
		fill(visit, visit + 1010, 0);
		cin >> a;
		int cnt = 0;
		visit[a] = 1;
		for (int j = 1; j <= n; j++)
		{
			if (visit[j] == 0)
			{
				dfs(j);//在该循环中统计联通分量
				cnt++;
			}
		}
		cout << cnt - 1 << endl;//第一次一定被统计
	}
	return 0;
}