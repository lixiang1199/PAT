#include<iostream>
using namespace std;
int main() {
	int n, m;
	int a[200];//˫����С
	cin >> n >> m;
	m %= n;//��ֹm��n����
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n-1; i >0; i--) {
		a[i + m] = a[i];//ȫ������ƶ�
	}
	for (int i = 0; i < m; i++) {
		a[i] = a[i + n];//�����ǰ�漸��
	}
	cout << a[0];
	for (int i = 1; i < n; i++) {
		cout << " " << a[i];
	}




}
