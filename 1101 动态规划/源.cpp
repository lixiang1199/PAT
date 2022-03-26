#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<int>candidates;
set<int>before, after;
int N,max_before[100000],min_after[100000];
int a[100000];

int main()
{
	int i, j, k;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
		after.insert(a[i]);//插入所有值
	}//输入
	for (i = 0; i < N; i++)
	{//比before的最大值大，比after最小值小
		after.erase(a[i]);
		if (before.empty() || *before.rbegin() < a[i])
		{//*before.rbegin  set before中的最大值
			if (after.empty() || *after.begin() > a[i])
			{//						set after中的最小值
				candidates.push_back(a[i]);
			}//
		}
		before.insert(a[i]);//每一个符合题意的元素加入到before中
	}
	
	sort(candidates.begin(), candidates.end());

	
	for (i = 0; i < N; i++)
	{
		if (max_before[i]<a[i] && min_after[i]>a[i])
		{
			candidates.push_back(a[i]);
		}
	}
	sort(candidates.begin(), candidates.end());

	cout << candidates.size() << endl;

	for (i = 0; i < candidates.size(); i++)
	{
		if (i)cout << " ";
		cout << candidates[i];
	}
	cout << endl;
	return 0;
}