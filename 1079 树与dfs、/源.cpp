#include<iostream>
#include<vector>
using namespace std;
double sum = 0; 
int i, j, k;
double r;
struct node
{
	vector<int>child;
	int amount;
};
node n[100000];
void dfs(int cur, double cur_unit)
{
	if (n[cur].child.size())//非叶节点
	{
		for (int each : n[cur].child)
		{
			dfs(each, cur_unit * (1 + r / 100));
		}
    }
	else
	{
		sum += n[cur].amount * cur_unit;
	}

	return;
}


int N;
double P;


int main()
{
	
	cin >> N >> P >> r;
	for (i = 0; i < N; i++)
	{
		cin >> j;
		if (j)
		{//非叶子结点
			while (j--)
			{
				cin >> k;
				n[i].child.push_back(k);
			}
		}
		else
		{//叶子结点
			cin >> n[i].amount;
		}
	}
	dfs(0, P);
	printf("%.1f", sum);

	return 0;
}