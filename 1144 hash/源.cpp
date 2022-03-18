#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	unordered_set<int>S;
	int N;
	cin >> N;
	int k;
	while (N--)
	{
		cin >> k;
		S.insert(k);
	}
	int i;
	for (i = 1; S.count(i); i++);
	//用来找最小的i  不能有i<N的条件   因为数字不限定在0——N的范围内

	cout << i;

	return 0;
}