#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int g2, g1 = 0, cnt = -2, temp, maxn = -1, minn = m + 1;//cnt  -2 �����ȥ�����ֵ����Сֵ
		cin >> g2;//��������ʦ�ĳɼ�
		for (int j = 1; j < n; j++) {//��ȥ��ʦ��һ��
			cin >> temp;//�ֱ�����ѧ�����ĳɼ�
			if (temp >= 0 && temp <= m) {//�ж��Ƿ�������
				if (temp > maxn)maxn = temp;//�ҳ������Сֵ
				if (temp < minn)minn = temp;
				g1 += temp;//���ϵ��ۼ�
				cnt++;//���óɼ��ĸ���
			}
		}
		cout << int((((g1 - minn - maxn) * 1.0 / cnt) + g2) / 2 + 0.5) << endl;//�ܷ��м�ȥ���ֵ��Сֵ��	
	}//��ע����������
	return 0;
}