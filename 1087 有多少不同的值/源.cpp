#include<iostream>
#include<iomanip>
using namespace std;
int m;
int c=0;
int main() {
	int n;
	int min = -1;
	cin >> n;
	for (int i = 1; i <= n; i++) {//��1��ʼ���������  �����Ǵ�0��ʼ����ǰһ����
		m = i / 2 + i / 3 + i / 5;
		if (m > min)
		{
			min = m;
			c++;
		}
	}
	cout << c;
}