#include<iostream>
#include<iomanip>
using namespace std;
#if 0
int p() {
	int i;
	cin >> i;
	char s;
	cin >> s;
	int  m = 1;
	int n = 1;//��n=1��ʼ�������߿�ʼ��ӡ
	while (i >= m)//�������ַ��ȿɴ�ӡ���ַ���ʱ
	{
		++n;//��һ��
		m = m + 2 * (2 * n - 1);//�ֱ��������ӡ
		//�ж�m�Ƿ񳬳���i���ķ�Χ


	}
	int l;//��¼����
	l = n - 1;//�������
	int ln = l;
	//for

	int hj = 0;//�ո���
	int lo = 0;//��¼hj�����˼���
	int p;//ɳ©ʣ������
	p = m - 2 * (2 * l - 1);

	for (; l > 0; l--)
	{
		int ci = 2 * l - 1;


		if (hj == 0) {
			while (ci != 0) {
				cout << s;//<< " ";
				ci--;

			}
			hj++;
			cout << endl;

		}
		else {
			while (ci != 0) {
				while (hj > 0)
				{
					cout << " ";
					hj--;
					lo++;//��¼hj�����˼���
				}
				cout << s;//<< " ";
				ci--;

			}
			hj += lo;
			hj++;

			lo = 0;//���ô���
			cout << endl;
		}
	}


	//��ӡ�°벿��
	int lu = 0;
	lu += hj - 2;
	while (lu != 0) {
		cout << " ";
		lu--;
	}
	int ch = 0;
	int ce = ln - 1;
	int pi = 2 * ce - 1;
	for (; ce > 0; ce--)
	{
		pi += ch;
		while (pi != 0)
		{
			cout << s;
			pi--;
			ch++;
		}
		pi += 2;
		cout << endl;
	}








	//���ʣ�����

	//cout << p-m;

}
#endif // 0
