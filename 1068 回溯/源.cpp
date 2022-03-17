#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//回溯法 特殊的dfs
int N, M, coin[10000];

vector<int>path;
bool dfs(int cur, int curmoney)
{
	path.push_back(coin[cur]);
	if (curmoney == M)
	{
		return 1;
	}
	else
	{
		for (int i = cur + 1; i < N && curmoney+coin[i]<=M;i++)
		{
		dfs(i, curmoney + coin[i]);
		}
	}
	path.pop_back();
	return 0;
}



int main()
{
	int i, j, k;
	cin >> N >> M;
	for (i = 0; i < N; i++)
		cin >> coin[i];
	sort(coin, coin + N);
	for (int i = 0; i < N && coin[i]<=M; i++)
		if (dfs(i, coin[i]))
		{
			for (i = 0; i < path.size(); i++)
			{
				if (i)cout << " ";
				cout << path[i];
			}
			return 0;
		}
		
	cout << "No Solution";
	return 0;
}
//1 2 3 4 5 7 8 9
//1 2 3 
//1 2   4
//1   3 4
//1   3   5
