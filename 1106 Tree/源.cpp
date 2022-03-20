#include<iostream>
#include<vector>
using namespace std;

vector<int>v[100005];

int mindepth = 99999999, minnum = -1;

void dfs(int index, int depth)
{
	if (mindepth < depth)
		return;
	if (v[index].size() == 0)
		if (mindepth == depth)
			minnum++;
		else if (mindepth>depth)
		{
			mindepth = depth;
			minnum = 1;
		}
	for (int i = 0; i < v[index].size(); i++)
		dfs(v[index][i], depth + 1);
}

int main()
{
	int n, k, c;
	double p, r;
	cin >> n >> p >> r;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> c;
			v[i].push_back(c);
		}
	}
	dfs(0, 0);
	
}