#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct node
{
	int key, left,right;
};

node a[101];
int maxlevel,cnt=0;
int b[101];
void dfs(int root, int level)
{
	maxlevel=max(level,maxlevel);
	if (a[root].left != -1)
		dfs(a[root].left, level + 1);//�������
	//�� �� �� , ���θ�ֵ
	a[root] = { b[cnt++],a[root].left,a[root].right };
	if (a[root].right != -1)
		dfs(a[root].right, level + 1);
}


int main()
{
	int n;
	cin >> n;
	int A, B;
	vector<int> v[100];//��Ž��ÿһ����±�
	for (int i = 0; i < n; i++)
	{
		cin >> A >> B;
		a[i].left = A; a[i].right = B;
	}
	for (int i = 0; i < n; i++)
		cin >> b[i];
	sort(b, b + n);
	dfs(0, 0);
	v[0].push_back(0);
	
	for(int i=0;i<=maxlevel;i++)//��
		for (int j = 0; j < v[i].size(); j++){//�ò������������
			if (i != 0)cout << " ";//��һ�㲻ֹһ�����
			cout << a[v[i][j]].key;
			if (a[v[i][j]].left != -1)
				v[i + 1].push_back(a[v[i][j]].left);
			if (a[v[i][j]].right != -1)
				v[i + 1].push_back(a[v[i][j]].right);

		}
	return 0;
}

