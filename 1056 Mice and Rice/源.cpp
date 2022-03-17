#include<iostream>
#include<queue>
using namespace std;
//permutation 置换/排列
int main()
{
	int np;//the number of programmers
	int ng;//the maximum number of mice in a group
	cin >> np >> ng;
	//int w[1001];//the weight of the i-th mouse respectively. 
	struct mouse
	{
		int weight;
		int rank;
	};
	mouse mice[1001];
	for (int i = 0; i < np; i++)
	{
		cin >> mice[i].weight;
	}
	//gives the initial playing order which is a permutation
	int order;
	queue<int> q;
	int cnt;
	for ( cnt= 0; cnt < np; cnt++)
	{
		cin >> order;
		q.push(order);
	}
	int temp = np;
	int group;
	while (q.size() != 1)
	{
		if (temp % ng == 0)
		{
			group = temp / ng;
		}
		else
			group = temp / ng+1;
		//计算出组数

		for (int i = 0; i < group; i++)
		{
			int k = q.front();//记录每一组中最大的老鼠
			for (int j = 0; j < ng; j++)
			{
				if (i * ng + j >= temp)break;
				int front = q.front();
				if (mice[front].weight > mice[k].weight)
				{
					k = front;
				}
				mice[front].rank = group + 1;
				q.pop();
			}
			q.push(k);

		}
		temp = group;	
	}
	mice[q.front()].rank = 1;
	for(int i=0;i<np;i++)
		printf("%d ", mice[i].rank);
}