#include<iostream>
using namespace std;
int a[1001];//ȫ����ʼ��Ϊ0
int main() {
	int N, M;
	cin >> N>>M;
	int temp;
	for (int i = 0; i < N; i++) {//��������
		cin >> temp;
		a[temp] += 1;//temp ����ֵ a���� ��ų��ֵĴ���
		//all positive numbers no more than 500
	}//����ÿ��ֵ��������ֵĴ�����������

	for (int i = 0; i < 1001; i++) {
		if (a[i])//i����ʱ
		{
			a[i]--;//������һ
			if (i < M && a[M - i])//i��MС����M-iҲ����
			{
				cout << i << " "<<M - i;
				return 0;
			}	             //��i+M-i=M��
			a[i]++;//��������
		}
		
	}

	cout << "No Solution";
	return 0;

	//���ظ�Ԫ��ͳ�Ƹ��������һ��������
}