#include<iostream>
#include<iomanip>
using namespace std;
int a[10000];//���μ�¼����

int c[1000];//��¼Ҫ��ѯ�ķ���
int p[100];//��ѯ���Ĵ���
int main() {
	int N;//ѧ��������
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//��������ѧ���ɼ�
	}
	int g;//��ѯ����
	cin >> g;
	 
	for (int j = 0; j < g; j++) {
		cin >> c[j];//��Ҫ��ѯ�����뵽c��
	}

	for (int k = 0; k < g; k++)//Ҫ��ѯ�����α���
	{
		for (int l = 0; l < N; l++)
		{
			if (c[k] == a[l]) 
			{
				p[k]++;
			}
		}


	}
	for (int j = 0; j < g-1; j++)//�������еĵ�g-1��
	{
		cout << p[j]<<" ";

	}
	cout << p[g-1];//���鵱�еĵ�g��

	return 0;
}