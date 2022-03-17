#include<iostream>
using namespace std;
int maxlevel = 0;
struct node {
	int data;
	int level;
	node* left, * right;
	node(int val) {
		left = NULL; right = NULL; data = val;
	}
};
void Insert(node*& root, int val)
{
	if (!root) {
		root = new node(val);
	}
	else {
		if (val <= root->data)
		{
			Insert(root->left, val);
		}
		else Insert(root->right, val);
	}
	return;
}

void getlevel(node*root,int level) {
	if (root) {
		root->level = level;
		maxlevel = max(maxlevel, level);
		getlevel(root->left, level + 1);
		getlevel(root->right, level + 1);
	}
	return;
}
int n1=0, n2=0;
void dfs(node* root) {
	if (root) {
		if (root->level == maxlevel) {
			n1++;
		}
		if (root->level == maxlevel - 1)n2++;
		dfs(root->left);
		dfs(root->right);
	}
	return;
}

int main() {
	int i,N;
	cin >> N;
	node* root=NULL;
	while (N--)
	{
		cin >> i;
		Insert(root,i);
	}
	getlevel(root,1);
	dfs(root);
	cout << n1 << " + " << n2 << " = " << n1 + n2;
	return 0;
}