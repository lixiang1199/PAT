#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int K;
	cin >> K;
	while (K--)
	{
		int N;
		cin >> N;
		bool valid = 1;
		vector<int> v(N);

		for (int j = 0; j < N; j++)
		{
			cin >> v[j];
			for (int t = 0; t < j; t++)
			{
				if (v[j] == v[t] || v[j] == v[t] - (t - j))
				{
					valid = 0;
					break;
				}
			}
	
		}
			if(!valid)
				cout << "NO\n";
			else
				cout << "YES\n";
	}
	return 0;
}