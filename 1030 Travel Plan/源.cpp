#include<iostream>
#include<vector>
using namespace std;

const int inf = 99999999;
bool visit[510];
vector<int>pre[510];
vector<int>path, temppath;

int N//城市数量
, M//高速路的数量
, S//起点
, D;//终点

int e[510][510], dis[510], cost[510][510];
int mincost = inf;

void dfs(int v)
{
	temppath.push_back(v);
	if (v ==S )
	{
		int tempcost = 0;
		for (int i = temppath.size() - 1; i > 0; i--)
		{
			int id = temppath[i],nextid=temppath[i-1];
			tempcost += cost[id][nextid];
		}
		if (tempcost < mincost)
		{
			mincost = tempcost;
			path = temppath;
		}
		temppath.pop_back();
		return;
	}
	for (int i = 0; i < pre[v].size(); i++)
		dfs(pre[v][i]);
	temppath.pop_back();
}

int main()
{
	fill(e[0], e[0] + 510 * 510, inf);
	fill(dis, dis + 510, inf);
	
	cin >> N >> M >> S >> D;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		int length;
		cin >> length;
		e[b][a] = e[b][a]=length;
		int money;
		cin >> money;
		cost[a][b] = cost[b][a] = money;
	}//初始化图

	pre[S].push_back(S);
	dis[S] = 0;

	for (int i = 0; i < N; i++)
	{
		int u = -1,minn=inf;
		for (int j = 0; j < N; j++)
		{
			if (visit[j] == false && dis[j] < minn)
			{
				u = j;
				minn = dis[j];
			}
		}
		if (u == -1)
		{
			break;
		}
		visit[u] = true;
		for (int v = 0; v < N; v++)
		{
			if (visit[v] == false && e[u][v] != inf)
			{
				if (dis[v] > dis[u] + e[u][v])
				{
					dis[v] = dis[u] + e[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if(dis[v]==dis[u]+e[u][v])
				{
					pre[v].push_back(u);
				}
			}
		}
	}
	dfs(D);

	return 0;
}