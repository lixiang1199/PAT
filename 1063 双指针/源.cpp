#include<iostream>
#include<unordered_set>//时间短一些
using namespace std;
unordered_set<int>s[51];
int main()
{
	int N, i, j, k;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &j);
		while (j--)
		{
			scanf("%d", &k);
			s[i].insert(k);
		}
	}
	int K;
	scanf("%d", &K);
	while (K--)
	{
		cin >> i >> j;//两个集合
		unordered_set<int>temp;
		for (int each : s[i])
			temp.insert(each);
		for (int each : s[j])
			temp.insert(each);
		int Nt = temp.size();
		int Nc = s[i].size() + s[j].size() - Nt;
		printf("%.1f%c\n", 100.0 * Nc / Nt, '%');
	}

}
//NC common
//Nt total