#include<iostream>
#include<iomanip>
using namespace std;
int n,sum,a[10];
int main() {
	cin >> n;//һ����n������
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;//������һ��ѭ���������Լ���ϣ�
			}
			sum += 10 * a[i] + a[j];
		}
		
	}
	cout << sum;

	return 0;
}