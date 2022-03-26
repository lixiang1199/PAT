#include<iostream>
#include<queue>
using namespace std;
#define BLACK 1
#define RED 0
struct node 
{
	int data;
	int tag;
	node* left, * right;
};

int getblack(node* root)
{
	if (!root)return 0;
	if (root->tag == BLACK)
	{
		return max(getblack(root->left), getblack(root->right)) + 1;
	}
}

bool isValid(node* root)
{
	if (root->tag == RED)
		return 0;
	{
		queue<node*>Q;
		Q.push(root);
		while (Q.size())
		{
			auto p = Q.front();
			Q.pop();
			int left_black = getblack(p->left);
			int right_black = getblack(p->right);
			if (p->left)Q.push(p->left);
			if (p->right)Q.push(p->right);



			if (p->tag == RED && p->left && p->left->tag == RED)return 0;
			if (p->tag == RED && p->right && p->right->tag == RED)return 0;
			
					}
	}
	//可使变量不相通
	{

	}
}

int N;
int a[50];

node* makenode(int h, int t)
{
	if (h > t)
		return nullptr;
	node* p = new node;
	p->data = abs(a[h]);
	p->tag = a[h] > 0 ? BLACK : RED;
	int i;
	for (i = h + 1; i <= t; i++)
		if (a[i] > p->data)
			break;
		//h+1 ~ i-1  
		p->left = makenode(h + 1, i - 1);
		p->right = makenode(i, t);
		return p;
}

int main()
{
	int K;
	cin >> K;
	while (K--)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> a[i];
	}
	node* root = makenode(0, N - 1);

	if (isValid(root))
	{
		cout << "Yes\n";
	}
	else
		cout << "NO\n";
}
