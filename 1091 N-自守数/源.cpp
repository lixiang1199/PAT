#include<iostream>
#include<iomanip>
using namespace std;
int z;
int main() {
	int M;//M �������ġ������� 1000 ����������
	cin >> M;
	int k;//������
	int p;//�˻����
	for (int i = 0; i < M; i++)//M����һ��һ������
	{
		cin >> k;

		for (int N = 1; N < 10; N++)
		{
			p = N * k*k;
			if (p % 10000 == k  || p % 1000 == k|| p % 100 == k  || p % 10 == k ) {
				cout << N << " " << p;
				z++;
				break;

			}
			
		}
		if (z == 0) {
			cout << "No";//ע���Сд

		}
		z = 0;
		if (i < M - 1) { cout << endl; }
	}
	


	return 0;

}