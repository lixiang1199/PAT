#include<fstream>
#include<algorithm>

using namespace std;
int n;
int v[1010][1010];
bool visit[1010];
fstream cin("in.txt");
fstream cout("out.txt");

void dfs(int node)
{
	visit[node] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i] && v[node][i] == 1)
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
			if (!visit[j])
			{
				dfs(j);
				cnt++;
			}
		}
	}

}