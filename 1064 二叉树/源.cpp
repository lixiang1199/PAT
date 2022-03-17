#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N;
int a[1001];//������
vector<int>inorder;
vector<int>key;

//�������
void inordertraverse(int i)
{
	if (i > N)return;//Խ��
	inordertraverse(i * 2);//��
	inorder.push_back(i);//��
	inordertraverse(i * 2 + 1);//��
	return;
}

int main()
{
	int i, j, k;
	cin >> N;
	inordertraverse(1);
	for (i = 0; i < N; i++)
	{
		cin >> j;
		key.push_back(j);
	}
	sort(key.begin(), key.end());
	for (i = 0; i < N; i++)
		a[inorder[i]] = key[i];
	queue<int> Q;
	Q.push(1);
	while (Q.size())
	{
		i = Q.front();
		Q.pop();
		if (i > 1)
			cout << " ";
		cout << a[i];


		if (i * 2 <= N)//����
			Q.push(i * 2);
		if (i * 2 + 1 <= N)//�Һ���
			Q.push(i * 2 + 1);

	}
	return 0;
}
