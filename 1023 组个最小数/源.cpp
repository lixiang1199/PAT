#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a[10];//����10�����ֵĸ���
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	if (a[0] == 0) {
		for (int i = 1; i < 10; i++)
		{
			while (a[i] != 0) {
				cout << i;
				a[i]--;
			}//���һ�Σ�������һ
		}
	}

	else {
		for (int i = 1; i < 10; i++) {
			if(a[i] > 0) {
				cout << i;
				a[i]--;
				break;
			}
			
			
		}

		while (a[0] > 0) {
			cout << 0;
			a[0]--;
		}//����һ��0����С�����������0

		for (int i = 1; i < 10; i++) {
			while (a[i] > 0) {//�������ˣ���while��if�Ƿ��ö�
				cout << i;
				a[i]--;
			}
			//�������ʣ��
		}
	}

	return 0;

}