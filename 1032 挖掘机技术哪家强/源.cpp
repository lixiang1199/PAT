#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num;//ѧУ���
	int b[10000];//����ѧУ�ܷ�
	int a[10000];//�������
	
	for (int i = 0; i < n+100; i++) {
		b[i] = 0;
	}
	//�����������ϼ�
	for (int i = 0; i < n; i++)
	{
		cin >> num>>a[i];
		
		b[num] += a[i];//ͬһ��ѧУ�ķ������
	}
	
	int max = 0;//�������
	int ne = 0;//��ߵı��
	for (int i = 1; i < n+10; i++) 
	{
		
		if(b[i] >=max) 
		{
			max = b[i];
			ne = i;//�ҳ���߷ֵ�ѧУ���
		}
	}
	cout << ne << " " << max;

	return 0;
}
//�жδ���ʹ𰸴���