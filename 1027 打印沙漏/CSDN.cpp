#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n = 2;//�����������ӵڶ��п�ʼ

	int s = 1;//�ۼӴ�1��ʼ

	int N;//��ĿҪ�����������

	cin >> N;

	char c;

	cin >> c;

	while (N >= s)//�������s����ֵ1�����м����һ��)
	{
		s += 2 * (2 * n - 1);//s�����������õĸ���
		n++;//������һ
	}
	//�ڵ���ʱҲִ����while��䣬˵��һ������һ��

	s -= 2 * (2 * (n - 1) - 1);//ȥ�������һ��

	n -= 2;//����ʼ��2��ȥ

//��ӡ�ϰ벿��

	int a = 0;

	for (int i = n; i > 0; i--)
	{
		a++;
		for (int j = 1; j < a; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << c;
		}
		cout << endl;
	}

	//�ٴ�ӡ������,����ӡ��һ��

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << c;
		}
		cout << endl;
	}
	cout << N - s;




}