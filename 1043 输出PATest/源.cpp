#include<iostream>
#include<iomanip>

using namespace std;
int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;//����
int main() {
	string a;

	cin >> a;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'P')
			P++;

		if (a[i] == 'A')
			A++;

		if (a[i] == 'T')
			T++;

		if (a[i] == 'e')
			e++;

		if (a[i] == 's')
			s++;

		if (a[i] == 't')
			t++;


	}

	int min;//�������ȡ�������ٵ��ַ�

	int ci[6] = { P,A,T,t,e,s };//����������������
	min = ci[0];//�ӵ�һ����ʼ
	for (int i = 0; i < 6; i++)
	{
		if (ci[i] < min)
		{
			min = ci[i];//����С��Ϊ׼
		}

	}

	for (int i = 0; i < min; i++)
	{
		cout << "PATest";


	}
	//��cout min��

	while (P > min || A > min || T > min || t > min || e > min || s > min) {
		if (P > min) {
			cout << "P";
			P--;
		}
		if (A > min) {
			cout << "A";
			A--;
		}
		if (T > min) {
			cout << "T";
			T--;
		}


		if (e > min) {
			cout << "e";
			e--;
		}
		if (s > min) {
			cout << "s";
			s--;
		}

		if (t > min) {
			cout << "t";
			t--;
		}
	}

	return 0;
}