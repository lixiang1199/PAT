#include<iostream>
#include<vector>
#include<set>
using namespace std;

int connected[201][201];
int N, M, K;

int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		connected[t1][t2] = connected[t2][t1] = 1;
	}
	cin >> K;//��ѯ
	while (K--)
	{
		int l;
		cin >> l;
		vector<int>v(l);
		set<int>s;
		bool flag1 = 1, flag2 = 1;
		for (int i = 0; i < l; i++)
		{
			cin >> v[i];
			s.insert(v[i]);//¼���ѯ
		}
		if (s.size() != N || l - 1 != N //�ظ� ���� ����
			|| v[0] != v[l - 1])//�ص�ԭ��
			{
				flag1 = 0;
			}
		for (int i = 0; i < l - 1; i++)
		{ //����ÿһ����  ������ǰ���������Ƿ��ڽ�
			if (connected[v[i]][v[i + 1]] == 0)
			{
				flag2 = 0;
			}
		}
		if (flag1 && flag2)
			cout << "YES\n";
		else
			cout << "NO\n";
		}
	return 0;
	}

