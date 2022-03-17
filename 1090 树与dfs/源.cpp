#include<iostream>
#include<vector>
using namespace std;
int N;
int root;
int depth[100000];
double p, r;
vector<int>v[100000];

void dfs(int cur)
{
	for (int each : v[cur])//遍历每个孩子
	{
		depth[each] = depth[cur] + 1;//孩子深度=父节点深度+1
		dfs(each);//继续遍历其他孩子
	}
	return;
}
int main()
{
	int i, j;
	cin >> N >> p >> r;
	for (i = 0; i < N; i++)
	{
		cin >> j;
		if (j >= 0)		
			v[j].push_back(i);//push到v[j]中 归为j的孩子
		else root = i;//-1的情况
	}
	depth[root] = 0;
	dfs(root);
	int maxdepth = 0;
	for (i = 0; i < N; i++)
	{
		if (depth[i] > maxdepth)
		{
			maxdepth = depth[i];
		}
	}
	int res = 0;
	for (i = 0; i < N; i++)
		if (depth[i] == maxdepth)res++;

	for (i = maxdepth; i--;)
	{
		p *= (1 + r / 100);
	}
	printf("%.2f %d", p, res);
	return 0;
}