#include<iostream>
#include<iomanip>
using namespace std;
struct yuebin {
	double kucun;
	double zongjia;
	double danjia;
};
int main() {
	int zhonglei, xuqiu;
	cin >> zhonglei >> xuqiu;

	yuebin a[1000], temp;
	for (int i = 0; i < zhonglei; i++) {
		cin >> a[i].kucun;
	}
	for (int i = 0; i < zhonglei; i++) {
		cin >> a[i].zongjia;
		a[i].danjia = a[i].zongjia / a[i].kucun;
	}

	double sum = 0;
	double lirun = 0;

	for (int j = 0; j < 1000; j++) {
		for (int i = 0; i < zhonglei; i++) {
			if (a[i + 1].danjia > a[i].danjia) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}



	for (int i = 0; i < zhonglei; i++) {
		if (a[i].kucun <= xuqiu) {//����û����ʱ
			xuqiu -= a[i].kucun;//�����ȥ���
			lirun += a[i].zongjia;//ȫ������
		}
		else {//�����Ѿ�����
			lirun += xuqiu * a[i].danjia;
			break;
		}



	}cout << setiosflags(ios::fixed)<<setprecision(2)<<lirun;
}