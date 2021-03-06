#include<iostream>
using namespace std;

int num[1000];
int maxdepth = -1;

struct node {
	int v;
	node* left, * right;
};

node* build(node* root, int v)
{

	if (root == NULL)
	{
		root = new node;
		root->v = v;
		root->left = root->right = NULL;
	}
	else if (v <= root->v)
		root->left = build(root->left, v);
	else
		root->right = build(root->right, v);
	return root;
}

void dfs(node* root, int depth)
{
	if (root == NULL)
	{
		maxdepth = max(depth, maxdepth);
		return;
	}
	num[depth]++;
	dfs(root->left, depth + 1);
	dfs(root->right, depth + 1);
	return;
}

int main()
{
	int n, t;
	cin >> n;
	node* root = NULL;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		root = build(root, t);
	}
	dfs(root, 0);
	printf("%d + %d = %d", num[maxdepth - 1], num[maxdepth - 2], num[maxdepth - 1] + num[maxdepth - 2]);
	return 0;
}
