#include<iostream>
#include<iomanip>
using namespace std;
int a[10000];//�������ϵ���
int b[10000];//���������
int c[10000];//��ֵ
int d[10000];//��¼��ֵ�Ĵ���
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//��¼�ƺ�

	}
	for (int i = 0; i < N; i++) {
		b[i] = i + 1;
		//cout << a[i] << "&" << b[i] << endl;
	}//��������֣���1 ��ʼ��ֵ


	for (int i = 0; i < N; i++) {
		c[i] = abs(a[i] - b[i]);
		d[c[i]]++;

	}
	int t = 0;
	for (int i = 0; i < N; i++) {
		if (d[i] > 1) { t++; }
	}

	for (int i = 10000; i >= 0; i--) {//���ǲ�ֵΪ0��������õ� N ���Ǹ���ֵ�������Ƿ������ȵĲ��0Ҳ����
		if (d[i] > 1) {
			cout << i << " " << d[i];
			if (t > 1) { cout << endl; t--; }
		}

	}







	return 0;

}
