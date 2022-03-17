#include<iostream>
using namespace std;

const int inf = 99999999;

int main()
{
	int cmax;//always an even number, is the maximum capacity of each station;
	int N;//the total number of stations
	int sp;//the index of the problem station
	int M;//number of roads
	int c[101];//the current number of bikes at S 
	int e[101][101];
	int book[101] = { 0 };
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
		{
			if (i != j) {
				e[i][j] = inf;
				e[j][i] = inf;
			}
			else
				e[i][i] = 0;
		}
	/*for (int i = 0; i < 101; i++) {
		cout << endl;
		for (int j = 0; j < 101; j++)
			cout << e[i][j] << " ";
	}*/

	cin >> N >> M;
	for (int i =0; i < N; i++)
	{
		cin >> c[i];
	}
	int v1, v2, w;
	for (int i = 0; i < M; i++)
	{
		cin >> v1 >> v2 >> w;
		e[v1][v2] = w;
		//e[v2][v1] = w;
	}
	book[0] = 1;
	int minn;
	int dis[101];
	for (int i = 0; i < 101; i++)
		dis[i] = e[1][i];
	int u;
	for (int i = 0; i < N; i++)
	{
		
		minn = inf;
		for (int j = 0; j <N;j++)
		{
			if (book[j] == 0 && dis[j] < minn)
			{
				minn = dis[j];
				u = j;
			}
		}
		book[u] = 1;
	}	
	for (int v = 0; v < N; v++)
	{
		if (e[u][v] < inf)
		{
			if (dis[v] > dis[u] + e[u][v])
			{
				dis[v] = dis[u] + e[u][v];
			}
		}
	}
}