#include<iostream>
using namespace std;
int temp[10];//����ּ�
int main() {
	int m;//���Լ���
	float X, Y;
	cin >> m >> X >> Y;
	int i, y;//���ұ�
	float z;//ȫ����float/double
	int p = 0;
	for (int i = 10; i < 100; i++)//��
	{
		y = i / 10 + (i % 10) * 10;//��
		if (abs(i - y) / float(X) == float(y) / float(Y))//ע��ת��
		{

			temp[p++] = i;
			z = abs(i - y) / X;

		}

	}
	if (p == 0) { cout << "No Solution"; }
	else {
		int max = temp[0];
		for (int j = 1; j < 10; j++) {
			if (temp[j] > max) {
				max = temp[j];

			}
		}
		cout << max << " ";
		y = max / 10 + (max % 10) * 10;
		z = y / float(Y);
		if (m > max) { cout << "Gai "; }
		else if (m < max) {
			cout << "Cong ";
		}
		else { cout << "Ping "; }

		if (m > y) { cout << "Gai "; }
		else if (m < y) {
			cout << "Cong ";
		}
		else { cout << "Ping "; }

		if (m > z) { cout << "Gai"; }
		else if (m < z) {
			cout << "Cong";
		}
		else { cout << "Ping"; }

	}
	return 0;
}