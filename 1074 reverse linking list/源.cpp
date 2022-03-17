#include<iostream>
#include<iomanip>
using namespace std;

int nl[100001];//ÐÂ±í
int node[100001][2];
int A, N, K;
int main()
{
	cin >> A >> N >> K;
	int a, k, next;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> k >> next;
		node[a][0] = k; node[a][1] = next;
	/*	cin >> node[i][0] >> node[i][1];*/
	}
	int m = 0;
	for (int i = A; i != -1; i = node[i][1])
	{
		nl[m++] = i;
	}
	int i = 0;
	while(i+K<=m)
	{
		reverse(nl + i, nl + i + K);
		i += K;
	}
	for (int i = 0; i < m - 1; i++)
	{
		cout << setw(5) << setfill('0') << nl[i] << " " << node[nl[i]][0] << " " << nl[i + 1] << endl;
	}
	cout << setw(5) << setfill('0') << nl[m-1] << " " << node[nl[m-1]][0] << " " << nl[m-1] << endl;

	return 0;
}