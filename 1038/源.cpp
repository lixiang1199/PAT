#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//5 32 321 3214 0229 87
//22932132143287

//x+y>y+x
//532>325 
bool comp(string a, string b)
{
	return a + b < b + a;
}

string s[10010];

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> s[i];

	sort(s, s + N, comp);
	
	string ans;
	for (int i = 0; i < N; i++)
		ans += s[i];

	
	while(ans[0] == '0' && ans.length()!=0)
		ans.erase(ans.begin());

	if (ans.length() == 0)
	{
		cout << 0;
		return 0;
	}
	cout << ans;

	return 0;
}