#include<iostream>
using namespace std;
int post[40], in[40];

struct node {
	int value;
	node* left, * right;
};
node* makenode(int h1,int t1,int h2,int t2)
{
	if (h1 > t1)return NULL;

	node* p = new node;
	p->value = post[t1];
	int index;
	for (index = h2; in[index] != post[t1]; index++);
	p->left = makenode(h1,index-1-h2+h1 , h2, index - 1);
	p->right = makenode(index-h2+h1, t1 - 1, index + 1, t2);
	return p;
}

int main()
{
	int N;
	cin >> N;
	int i;
	for (i = 0; i < N; i++)
		cin >> post[i];
	for (i = 0; i < N; i++)
		cin >> in[i];
	node* root = makenode(0, N - 1, 0, N - 1);
	node* queue[40];
	int head = 0, tail = 0;
	queue[tail++] = root;
	while (head < tail)
	{
		if (head != 0) { cout << " "; }
		node* p = queue[head++];
		cout << p->value;
		if (p->left)queue[tail++] = p->left;
		if (p->right)queue[tail++] = p->right;
	}
	return 0;
}