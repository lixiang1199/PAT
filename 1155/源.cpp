#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int a[1009], n, isMin = 1, isMax = 1;

void dfs(int index)
{
	if (index * 2 > n && index * 2 + 1 > n)
	{
		if (index <= n)
		{
			for (int i = 0; i < v.size(); i++)
				printf("%d%s", v[i], i != v.size() - 1 ? " " : "\n");
		}
	}

	else
	{
		v.push_back(a[index * 2 + 1]);
		dfs(index * 2 + 1);
		v.pop_back();//β��ɾ��Ԫ��
		v.push_back(a[index * 2]);
		dfs(index * 2);
		v.pop_back();
	}

}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);//�Ѵ�1��ʼ
	v.push_back(a[1]);
	dfs(1);
	for (int i = 2; i <= n; i++) 
	{
		if (a[i / 2] > a[i])isMin = 0;
		if (a[i / 2] < a[i])isMax = 0;
	}


}