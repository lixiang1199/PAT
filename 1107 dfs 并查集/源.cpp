#include<iostream>
#include<vector>
#include<algorithm>
#include<set>//减少重复建立边
using namespace std;
int cnt;
vector<int>club[1001];
set<int>v[1000];
int N;
bool visit[1000] = { 0 };

void dfs(int cur)
{
	visit[cur] = 1;
	cnt++;
	for (int each : v[cur])
	{
		if (!visit[each])
		{
			dfs(each);
		}
	}
}


int main()
{
	cin >> N;
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		cin >> j;
		while (j--)
		{
			cin >> k;
			club[k].push_back(i);
		}
	}
	for (i = 1; i <= 1000; i++)
	{
		for (j = 0; j < club[i].size(); j++)
		{
			for (k = j + 1; k < club[i].size(); k++)
			{
				int jj, kk;
				jj = club[i][j];
				kk = club[i][k];
				v[jj].insert(kk);
				v[kk].insert(jj);//邻接表
			}
		}
	}//建立图
	vector<int>ans;
	//dfs寻找连通子图
	for(i=0;i<N;i++)
		if (!visit[i])
		{
			cnt = 0;
			dfs(i);
			ans.push_back(cnt);
		}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	for (i = 0; i < ans.size(); i++)
		cout << ans[i];
}