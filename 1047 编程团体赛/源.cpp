
#include<iostream>
using namespace std;
int a[1001];
int index=0;
int ma=0;//����max�ͻ���ֲ���ȷ
int main() {
	int N;//������Ա����
	int ID;//������
	int id;//��Ա���
	int g;//�ɼ�
	char ch;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{

		cin >> ID;
		ch=getchar();
		cin >> id >> g;
		a[ID] += g;//���������뵽��Ӧ�İ༶������
		//ʵ����û���õ���Ա��ţ���δ�����Ա
	}
	for(int i=0;i<1001;i++)
	{
	
		if (a[i] > ma) {
			ma = a[i];
			index = i;

		}
		//Ѱ�����ֵ������¼����
	}
	cout << index << " " << ma;


	
}