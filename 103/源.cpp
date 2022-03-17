//Each case starts with a line containing 3 numbers N (<1000), M and K, 
//which are the total number of cities,
//the number of remaining highways, 
//and the number of cities to be checked, respectively. 
#include<iostream>
#include<vector>
using namespace std;
int N, M, K;
vector<int>v[1000];
int lost;
int visit[1000]={0};

void dfs(int curcity)
{
	visit[curcity] = 1;
	for (int i : v[curcity])
	{
		if (i != lost && !visit[curcity])
		{
			dfs(i);//目的是标记
		}
	}

	return;
}
int main()
{
	int i, j, k;
	cin >> N >> M >> K;//3 2 3
	for (i = 0; i < M; i++)//3
	{	
		cin >> j >> k;
		v[j].push_back(k);//无向图对称
		v[k].push_back(j);
	}
	while (K--)//3
	{
		
		cin >> lost;
		for (i = 0; i <= N; i++)//2
			visit[i] = 0;
		j = 0;
		for (i = 1; i <= N; i++)//2
		{			
			if (visit[i]==0)
			{
				j++;
				dfs(i);
			}
		}
		cout << j - 1<<endl;
	}
	
}