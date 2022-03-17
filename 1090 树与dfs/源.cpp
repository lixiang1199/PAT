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
	for (int each : v[cur])//����ÿ������
	{
		depth[each] = depth[cur] + 1;//�������=���ڵ����+1
		dfs(each);//����������������
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
			v[j].push_back(i);//push��v[j]�� ��Ϊj�ĺ���
		else root = i;//-1�����
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