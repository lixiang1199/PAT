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
		after.insert(a[i]);//��������ֵ
	}//����
	for (i = 0; i < N; i++)
	{//��before�����ֵ�󣬱�after��СֵС
		after.erase(a[i]);
		if (before.empty() || *before.rbegin() < a[i])
		{//*before.rbegin  set before�е����ֵ
			if (after.empty() || *after.begin() > a[i])
			{//						set after�е���Сֵ
				candidates.push_back(a[i]);
			}//
		}
		before.insert(a[i]);//ÿһ�����������Ԫ�ؼ��뵽before��
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