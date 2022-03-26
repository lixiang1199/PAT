#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;

vector<int>v[10000];

int main()
{
	int N, M, K;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(i);
		v[b].push_back(i);
	} //邻接表  稀疏图

	//本题记录邻接的边

	cin >> K;
	vector<int>points;
	while (K--)
	{
		int point;
		cin >> point;
		points.push_back(point);
	}
	bool visited[10000];

	memset(visited, 0, sizeof(visited));
	for (int point : points)
	{
		for (int eage : v[point])
		{
			visited[eage] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		if (visited[i])
			cnt++;
	}
	if (cnt == M)
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}