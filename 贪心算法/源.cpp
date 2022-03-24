//1 3 5
#include<iostream>
#include<set>//自动排序
using namespace std;

int main()
{
	multiset<double>M;//没有去重功能
	int N;
	cin >> N;
	while (N--)
	{
		double l;
		cin >> l;
		M.insert(l);//碎片长度
	}
	while (M.size() > 1)
	{
		double a = *M.begin();
		M.erase(M.begin());
		double b = *M.begin();
		M.erase(M.begin());
		double c = (a + b) / 2;
		M.insert(c);
	}
	int ans= floor( * M.begin());
	//向下取整 -2.3——>-3.0
	cout << ans;
}