#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	float a[3];//һ�е�������
	char c[4] = "WTL";//���һ��0


	float sum = 1, max = 0;
	int j = -1;
	for (int p = 0; p < 3; p++) {//���ѭ�������У�ѭ������
		for (int i = 0; i < 3; i++) {

			cin >> a[i];
			if (a[i] > max) {
				max = a[i];
				j = i;
			}
		}
		cout << c[j] << " ";
		sum *= max;//ÿ�γ������������
		max = 0;//ÿ��ѭ��������ֵҪ���г�ʼ������������ش���
		j = 0;//ע��Ҫ��ʼ������ֵ
	}
	float r = (sum * 0.65 - 1) * 2;

	cout << setiosflags(ios::fixed) << setprecision(2) << r;



}