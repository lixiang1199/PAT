#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int N;//����
	cin >> N;

	char C;
	cin >> C;

	int y = (N + 1) / 2;//������������һ�룬����������ȡ��
	int i;//����
	for (int i = 1; i <=y; i++) {

		if (i == 1 || i == y)//��β�������
			for (int j = 0; j < N; j++) {
				cout << C;
			}
		//��β�������������
		else {
			cout << C;//��
			for (int k = 0; k < N - 2; k++)//�м���� ����-2����β����
			{
				cout << " ";
			}
			cout << C;//β
		}

		cout << endl;//ÿ��һ�����һ�οո�

	}
}