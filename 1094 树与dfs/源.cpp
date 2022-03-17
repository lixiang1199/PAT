#include<iostream>
#include<vector>
using namespace std;
int num_of_level[100] = { 0 };
vector<int>children[100];
void dfs(int cur, int curlevel) {
	num_of_level[curlevel]++;
	for (int each : children[cur])
	{
		dfs(each, curlevel + 1);
	}
}



int main()
{
	int N, M;
	int i, j, k;
	cin >> N >> M;
	while (M--) 
	{
		cin >> i >> k;
		while (k--)
		{
			cin >> j;
			children[i].push_back(j);
		}
	}

	dfs(1, 1);
	int maxnum = -1,maxnumlevel;
	for (i = 1; i < 100; i++) {
		if (num_of_level[i] > maxnum)
		{
			maxnum = num_of_level[i];
			maxnumlevel = i;
		}
	}
	cout << maxnum << " " << maxnumlevel;
}