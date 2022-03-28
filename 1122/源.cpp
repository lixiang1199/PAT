#include<iostream>
#include<vector>
#include<set>
using namespace std;

int connected[201][201];
int N, M, K;

int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		connected[t1][t2] = connected[t2][t1] = 1;
	}
	cin >> K;//查询
	while (K--)
	{
		int l;
		cin >> l;
		vector<int>v(l);
		set<int>s;
		bool flag1 = 1, flag2 = 1;
		for (int i = 0; i < l; i++)
		{
			cin >> v[i];
			s.insert(v[i]);//录入查询
		}
		if (s.size() != N || l - 1 != N //重复 少走 多走
			|| v[0] != v[l - 1])//回到原点
			{
				flag1 = 0;
			}
		for (int i = 0; i < l - 1; i++)
		{ //遍历每一个点  看他们前后两个点是否邻接
			if (connected[v[i]][v[i + 1]] == 0)
			{
				flag2 = 0;
			}
		}
		if (flag1 && flag2)
			cout << "YES\n";
		else
			cout << "NO\n";
		}
	return 0;
	}

