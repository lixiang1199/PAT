#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main() {
	int c[128];//��¼����
	for (int i = 0; i < 128; i++) {
		c[i] = 0;
	}
	char a[1000];//�����ַ�
	cin.get(a, 1000);
	
	int len=strlen(a);//����

	for (int i = 0; i < len; i++) {

		int b = a[i];

		if (b >= 65 && b <= 90) {
			b += 32;
		}//ȫ����ΪСд

		c[b]++;
	}
	
	int max = 0;//���ִ��������ֵ
	int ma=0;//���������ַ�
	for (int j = 97; j < 123; j++)
	{
		if (c[j] > max) {
			max = c[j];
			ma = j;
		}
	}

	cout << char(ma) << " " << max;

	return 0;
}
//����Խ�磬������û�г���a[-1],���߳�������Ĳ���