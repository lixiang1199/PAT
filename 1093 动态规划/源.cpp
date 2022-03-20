#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int dp[3][100000];
	dp[0][0] = s[0]=='P'?1:0;
	dp[1][0] = 0;
	dp[2][0] = 0;
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == 'P')
		{
			dp[0][i] = (dp[0][i - 1] + 1)% 1000000007;
			dp[1][i] = dp[1][i - 1];
			dp[2][i] = dp[2][i - 1];
		}
		else if (s[i] == 'T')
		{
			dp[0][i] = dp[0][i - 1] ;
			dp[1][i] = dp[1][i - 1] ;
			dp[2][i] = (dp[2][i - 1]+dp[1][i - 1])%1000000007;
		}
		else if (s[i] == 'A')
		{
			dp[0][i] = dp[0][i - 1];
			dp[1][i] = (dp[1][i - 1]+ dp[0][i - 1]) % 1000000007;
			dp[2][i] = dp[2][i - 1] ;
		}

	}
	cout << dp[2][s.size() - 1];

	return 0;

}