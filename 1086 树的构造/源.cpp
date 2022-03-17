#include<iostream>
#include<vector>
using namespace std;

struct node {
	int key;
	node* left, * right;
};

void makenode(node*& root)
{//& 对本体进行修改
	string s;
	int i;
	root = new node;
	cin >> i;
	root->key = i;
	s = "";//初始化
	cin >> s;
	if (s == "Push")
	{
		makenode(root->left);
	}
	else root->left = NULL;
	s = "";//初始化
	cin >> s;
	if (s == "Push") {
		makenode(root->right);
	}
	else root->right = NULL;
}
vector<int>v;
void postordertraverse(node* root)
{
	if (root == NULL)return;
	postordertraverse(root->left);
	postordertraverse(root->right);
	v.push_back(root->key);
	return;
}
int main()

{
	int i;
	cin >> i;
	node* tree = NULL;
	string s;
	cin >> s;
	makenode(tree);

	postordertraverse(tree);
	for (i = 0; i < v.size(); i++)
	{
		if (i)cout << " ";
		cout << v[i];
	}
}