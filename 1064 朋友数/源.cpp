
#include<iostream>
#include<iomanip>
using namespace std;
int num;//ѧУ���
int b[100000];//����ѧУ�ܷ�
int a[100000];//�������
int temp;
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num >> a[i];

		b[num] += a[i];//ͬһ��ѧУ�ķ������
		temp = num;//���±��
	}

	int max = 0;//�������
	int ne = temp;//��ߵı��
	for (int i = 0; i < n - 1; i++)
	{

		if (b[i] >= max)
		{
			max = b[i];
			ne = i;//�ҳ���߷ֵ�ѧУ���
		}
	}
	cout << ne << " " << max;

	return 0;
}
//�жδ���ʹ𰸴��󣬼���temp���