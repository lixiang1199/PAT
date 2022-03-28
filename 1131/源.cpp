#include<iostream>
#include<vector>
using namespace std;
//N ��·�� M[i]Ϊi���ߵ�վ��
int N, M[101];
int start, destination;
vector<pair<int,int>>v[10000];
int minstop[10000],mintransfer[10000];
vector<pair<int, int>>ans;
void dfs(int cur,int curstop,int curtansfer, vector<pair<int, int>>&path)
{
	if (curstop > minstop[cur] || (curstop == minstop[cur] && curtansfer > mintransfer[cur]))
		return;//��ʱֹ��
	if (cur == destination)
	{//�����յ�
		if (curstop < minstop[cur] || (curstop == minstop[cur] && curtansfer < mintransfer[cur]))
		{
			minstop[cur] = curstop;
			mintransfer[cur] = curtansfer;
			ans = path;
		}
	}
	else//û��
	{
		if (curstop < minstop[cur] || (curstop == minstop[cur] && curtansfer < mintransfer[cur]))
		{
			minstop[cur] = curstop;
			mintransfer[cur] = curtansfer;
		}
		for (auto p : v[cur])
		{
			if (path.size() && p.second != path.back().second)
			{
				path.emplace_back(p);
				dfs(p.first, curstop + 1, curtansfer + 1, path);
				path.pop_back();
			}
			else
			{
				path.emplace_back(p);
				dfs(p.first, curstop + 1, curtansfer, path);
				path.pop_back();
			}
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> M[i];
		vector<int>temp;
		for (int j = 0; j < M[i]; j++)
		{
			cin >> temp[j];
		}
		for (int j = 0; j + 1 < M[i]; j++)
		{	//j��j+1�����ڹ�ϵ���������һ�β���ִ��
			int a = temp[j], b = temp[j + 1];
			v[a].emplace_back(b, i);
			v[b].emplace_back(a, i);
		}
	}
		int K;
		cin >> K;
		while (K--)
		{
			vector<pair<int, int>>path;
			memset(minstop, 0x3f, sizeof(minstop));
			cin >> start >> destination;
			dfs(start, 0, 0,path);
			cout << ans.size() << endl;
			for (int i = 0; i < ans.size(); i++)
			{
				cout << ans[i].first<<" ";
			}
		}

}