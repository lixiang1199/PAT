#include<iostream>
#include<algorithm>
using namespace std;

struct testee {
	string ID;
	int score, frank, location, lrank;
};
testee t[30000];
int main()
{
	int i, j, k;
	int N, K;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		int start = j;
		cin >> K;
		while (K--)
		{
			cin >> t[j].ID>>t[j].score;
			t[j].location = i;
			j++;
		}
		sort(start + t, t + j, comp);
		for (int k = start; k < j; k++)
		{
			if (k == start || t[k].score != t[k - 1].score)
				t[k].lrank = k - start + 1;
			else
				t[k].lrank = t[k - 1].lrank;

		}
	}
	sort(t, t + j, comp);
	for (int k = 0; k < j; k++)
	{
		if(k==0 || t[k].score!=t[k-1].score)

	}
}