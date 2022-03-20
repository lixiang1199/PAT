#include<iostream>
#include<vector>
using namespace std;
int M, N;
bool isMax(vector<int>& v)
{
	for (int i = 1; i <= N; i++)
	{
		if ((i * 2) <= N)
		{
			if (v[i] < v[i * 2])
				return 0;
		}
		else break;
		if (i * 2 + 1 <= N)
		{
			if (v[i] < v[i * 2 + 1])
				return 0;
		}
	}
	return 1;
}
bool isMin(vector<int>& v)
{
	for (int i = 1; i <= N; i++)
	{
		if ((i * 2) <= N)
		{
			if (v[i] > v[i * 2])
				return 0;
		}
		else break;
		if (i * 2 + 1 <= N)
		{
			if (v[i] > v[i * 2 + 1])
				return 0;
		}
	}
	return 1;
}

void dfs(vector<int>& v, int cur, vector<int>& res)
{
	if (cur > N)return;
	dfs(v, cur * 2, res);//×ó
	dfs(v, cur * 2 + 1, res);//ÓÒ
	res.push_back(v[cur]);//¸ù

}

vector<int> postordertraverse(vector<int>& v)
{
	vector<int>res;
	dfs(v,1,res);
	return res;
}
int main()
{
	
	cin >> M >> N;
	while (M--)
	{
		vector<int>v(N);
		for (int i = 1; i <= N; i++)
			cin >> v[i];
		if (isMax(v))cout << "Max Heap\n";
		else if (isMin(v))cout << "Min Heap\n";
		else cout << "Not Heap\n";
		vector<int>ans=postordertraverse(v);
		for (int i = 0; i < ans.size(); i++)
		{
			if (i)cout << " ";
			cout << ans[i];
		}
		cout<< endl;
	}
}