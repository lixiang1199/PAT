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
	//��������С��i  ������i<N������   ��Ϊ���ֲ��޶���0����N�ķ�Χ��

	cout << i;

	return 0;
}