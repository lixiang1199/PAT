#include<iostream>
#include<vector>
using namespace std;
vector<int> child[100];
int N, M;
int maxlevel,num_of_eachlevel[100];

void dfs(int curID,int curlevel)
{
	if (curlevel > maxlevel)maxlevel = curlevel;
	if (child[curID].size()) 
	{
		for (auto x : child[curID])
			dfs(x, curlevel + 1);
	}
	else {
		num_of_eachlevel[curlevel]++;
	}
}

int main()
{
	int i,j;
	cin >> N>> M;
	for (i = 0; i < M; i++)
	{
		int ID, K;
		cin >> ID >> K;
		while (K--)
		{
			cin >> j;
			child[ID].push_back(j);
		}
	}
	dfs(1,1);
	for (i = 1; i <= maxlevel; i++)
	{
		if (i > 1)cout << " ";
		cout << num_of_eachlevel[i];
	}
}