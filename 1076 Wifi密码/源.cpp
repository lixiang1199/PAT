#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;//����
	char p;//��ȷ���
	char num;//��Ӧѡ��
	cin >> n;//��������
	int m[100];//��������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++) {
			cin >> num;
			getchar();
			cin >> p;
			if (p == 'T')
			{
				m[i] = num;		
			//ʹ��break��䵼���˴���
			}
		}
	}
		for (int k = 0; k < n; k++) {
			if (m[k] == 'A')
			{
				cout << 1;
			}
			else if (m[k] == 'B')
			{
				cout << 2;
			}
			else if (m[k] == 'C') {
				cout << 3;
			}
			else cout << 4;
		}

		return 0;
	}




