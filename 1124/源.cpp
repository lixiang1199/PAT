#include<iostream>
#include<set>

using namespace std;

int main()
{
	int M, N ,S;
	cin >> M >> N >> S;
	set<string>dic;
	int idx = 0;
	while (M--)
	{
		string s;
		cin >> s;
		if (dic.count(s))
			continue;
		
		idx++;
		
		if (idx >= S && (idx - S) % N == 0)
		{
			dic.insert(s);
			cout << s << endl;
		}
	}
	if (idx < S)
		cout << "Keep going...";

	return 0;
}