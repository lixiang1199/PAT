#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, a[10010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int sum = a[0];//��һ�����Ӳ���
	for (int i = 1; i < n; i++)//�ӵڶ��ο�ʼ��
		sum = (sum + a[i]) / 2;
	cout << sum;
	return 0;
}