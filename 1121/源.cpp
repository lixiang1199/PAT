#include<iostream>
#include<set>
#include<iomanip>
//注意输出位数
//set的删除操作为 erase
using namespace std;
int couple[100000];
set<int>ans;
int main()
{
	for (int i = 0; i < 100000; i++)
		couple[i] = -1;
	int N;//the total number of couples.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int p1, p2;
		cin >> p1 >> p2;
		couple[p1] = p2;
		couple[p2] = p1;
	}//录入映射
	int M;
	cin >> M;
	while (M--)//查询
	{
		int p3;
		cin >> p3;
		if (couple[p3] >= 0)
			if (ans.count(couple[p3]))
			{
				ans.erase(couple[p3]);
				continue;
			}			//有配偶
		ans.insert(p3);
	}
	if (ans.size() == 0)
		cout << 0;
	else
	{
		cout << ans.size() << endl;
		bool cnt = 0;
		for (auto it : ans)
		{
			if (cnt)
				cout << " ";
			cnt = 1;
			cout << setw(5) << setfill('0') << it;
		}
	}
	return 0;
}