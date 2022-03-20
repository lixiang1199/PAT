#include<iostream>
#include<vector>

using namespace std;

int N, M, S, D,dis[500][500],cost[500][500];
vector<int>v[500];
vector<int>path;
int mindis[500];
int mindistoD = 9999999, mincosttoD = 99999999;
vector<int> fin;
void dfs(int curcity, int curdis, int curcost)
{
	if (curdis > mindis[curcity])return;//及时止损
	path.push_back(curcity);
	if (curcity == D)//到达目的地
	{
		if (curdis < mindistoD || (curdis == mindistoD && curcost < mincosttoD))
		{
		fin = path;
		mindistoD = mindis[D] = curdis;
		mincosttoD = curcost;
		}
	}
	else {
		if (curdis < mindis[curcity])
		{
			mindis[curcity] = curdis;
			for (int each : v[curcity])
			{
				dfs(each, curdis + dis[curcity][each], curcost + cost[curcity][each]);
			}
		}
	}
	path.pop_back();
}

int main()
{
	int i, j, k, l;
	cin >> N >> M >> S >> D;
	while (M--)
	{
		cin >> i >> j >> k >> l;
		v[i].push_back(j);
		v[j].push_back(i);
		dis[i][j] = dis[j][i] = k;
		cost[i][j] = cost[j][i] = l;
	}
	for (i = 0; i < N; i++)
		mindis[i] = 99999999;

	dfs(S,0,0);
	for (int each : fin)
		cout << each<<" ";
	cout << mindistoD << " " << mincosttoD;
}