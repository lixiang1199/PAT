//1 3 5
#include<iostream>
#include<set>//�Զ�����
using namespace std;

int main()
{
	multiset<double>M;//û��ȥ�ع���
	int N;
	cin >> N;
	while (N--)
	{
		double l;
		cin >> l;
		M.insert(l);//��Ƭ����
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
	//����ȡ�� -2.3����>-3.0
	cout << ans;
}