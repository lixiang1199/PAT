#include<iostream>
#include<vector>
using namespace std;
struct node {
	int key;
	node* left = NULL;
	node* right = NULL;
};

int N;
int pre[100];
int post[100];
bool unique = 1;
void makenode(node*& root, int h1, int h2, int l)
{
	if (l == 0)return;
	if (l == 1)return;//无左右子树
	root = new node;
	root->key = pre[h1];
	//左子树
	int i;//根（绿点的位置）
	for (i = h2; i < h2 + l; i++)if (post[i] == pre[h1 + 1])break;
	int l1, l2;//左子树和右子树的长度
	l1 = l - h2 + 1;
	l2 = l - l1-1;
	//只要l2有一次就
	if (l2 == 0)unique = 0;
	makenode(root->left, h1 + 1, h2, l1);
	makenode(root->right, h1 + 1 + l1,i+1,l2);
}
vector<int>v;
void inordertraverse(node* p)//只读不写
{
	if (p)
	{
		inordertraverse(p->left);
		v.push_back(p->key);
		inordertraverse(p->right);
	}
	return;
}

int main()
{
	int i;
	node* root = NULL;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> pre[i];
	for (i = 0; i < N; i++)
		cin >> post[i];
	makenode(root, 0, 0, N );

	inordertraverse(root);

	if (unique)
		cout << "Yes\n";
	else cout << "No\n";

	for (i = 0; i < v.size(); i++)
	{
		if (i)cout << " ";
		cout << v[i];
	}
	
	return 0;
}