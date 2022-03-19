#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m, a, b, k, flag=0, in[1010];
	vector<int> v[1010];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		in[b]++;
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		bool judge = 1;
		vector<int>copy_in(in, in + n+1);
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			if (copy_in[a] != 0)//a的入度不为0
				judge = 0;//不是拓扑序列
			for (int each : v[a])
				copy_in[each]--;//每一条边的入度减一
		}
		if (judge)
			continue;
		if (flag)cout << " ";
		cout << i;
		flag = 1;
	}
	return 0;
}

