#include<iostream>
#include<unordered_set>
using namespace std;

int N, M;
int a[10000], b[10000];
int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
		cin >> a[i] >> b[i];
	int K;
	cin >> K;
	while (K--)
	{
		unordered_set<int>S;
		int co[1000];
		bool same=0;
		for (int i = 0; i < N; i++)
		{
			cin >> co[N]; 
			S.insert(co[i]);
		}
		for (int i = 0; i < M; i++)
		{
			if (co[a[i]] == co[b[i]]) {
				same = 1;
				break;
			}
		}
		if (same)cout << "No\n";
		else
		{
			cout << S.size()<<endl;
		}
	}

}