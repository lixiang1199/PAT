#include<iostream>
//#include<iomanip>
using namespace std;
int M;//����
int N;//����
int A, B;//����˵�
int C;//ָ�����滻�Ҷ�ֵ
int D[500][500];//���ش洢 Ҫ�㹻��Ų����жδ���
int main() {

	cin >> M >> N;
	cin >> A >> B >> C;
	for (int i = 0; i < M; i++)
	{

		for (int j = 0; j < N; j++)
		{
			cin >> D[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{

		for (int j = 0; j < N; j++)
		{
			if (D[i][j] >= A && D[i][j] <= B) {
				D[i][j] = C;
			}


			if (D[i][j] < 10) {
				cout << "00";
			}
			if (D[i][j] < 100 && D[i][j] >= 10) {
				cout << "0";
			}

			cout << D[i][j];

			if (j + 1 < N) { cout << " "; }
		}
		if (i + 1 < M) { cout << endl; }
	}

	//ѭ��Ƕ�׹���ᵼ�³�ʱ���������ѭ��������ʱ�����Լ���


	return 0;

}