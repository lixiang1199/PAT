//stack  7   
//result  1 2 3 4 5 6 7
// 

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int M;//ջ��
	int N;//���г�
	int K;//����
	int i, j, k;
	cin >> M >> N >> K;
	while (K--)
	{
		stack<int>S;//ÿ�γ�ʼ�� ����δ��0��ɵ�Ӱ��
		int a[1000];
		for (i = 0; i < N; i++)
			cin >> a[i];//Ҫ�жϵ�����
		j = 0;//push���Ĵ���
		for (i = 0; i < N; i++)
		{//�ж�a[i]�ܷ��ó���
			if (a[i] > j)
			{
				while (S.size() < M && a[i] > j)
				{
					S.push(j + 1);//��1��ʼ��ջֱ������Ŀǰ��Ԫ��
					j++;//��1��ʼ������ֱ����a[i]ƥ��
				}//ֻҪj��a[i]��� �����Ѿ�����S����󳤶ȣ�ջ���������˳�whileѭ��
			}
			if (a[i] > j)//֮ǰ�Ѿ����ϵ�����Ҫ��j��Ȼû��a[i]��˵��ջ������
			{
				break;
			}
			else if (S.top() != a[i])//����ջ�ڣ�������ջ��
			{//��ǰԪ�ز�������ջ��ջ��
			 //7 �Ų��� ����Ϊ5��ջ��
			//��ʱ��ջ��ΪS.top()==5,��a[i]==7;
				break;
			}
			else S.pop();//û���������⣬pop����Ԫ��
		}

		if (i == N)//N��ѭ����ִ�����
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;

	}
	return 0;
}