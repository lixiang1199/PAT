#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


int N;
int num[101];

struct node {
	int data, lchild, rchild;
};
node n[101];
int cursor = 0;
void levelorder_traverse() {
	queue<int>Q;
	Q.push(0);
	while (Q.size()) {
		int a = Q.front();
		Q.pop();
		if (a==0)cout << n[a].data;
		if (a > 0)cout << " " << n[a].data;
		if (n[a].lchild>=0)Q.push(n[a].lchild);
		if (n[a].rchild>=0)Q.push(n[a].rchild);
	}
	return;
}

void inorder_traverse(int curID) {
	if (n[curID].lchild>=0)inorder_traverse(n[curID].lchild);
	n[curID].data = num[cursor++];
	if (n[curID].rchild>=0)inorder_traverse(n[curID].rchild);
	return;// 注意0 也可取
}
int main()
{
	cin >> N;
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		cin >> j >> k;
		n[i].lchild = j;
		n[i].rchild = k;
		
	}
	for (i = 0; i < N; i++)cin >> num[i];
	sort(num, num + N);

	inorder_traverse(0);
	levelorder_traverse();
}