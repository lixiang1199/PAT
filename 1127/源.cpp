#include<iostream>
#include<queue>
using namespace std;

int N, in[50], post[50];

class node
{
public:
	int data;
	node* left, * right;
};

node*makenode(int h1,int h2,int l)
{
	if (!l)return NULL;
	node* p = new node;
	p->data = post[h2 + l - 1];
	int i;
	for (i = h1;; i++)
		if (in[i] == p->data)
			break;

	int l1 = i - h1;
	int l2 = l - l1
		-1;//注意要减去根节点
	
	p->left = makenode(h1, h2, l1);
	p->right = makenode(i + 1, h2 + l1, l2);
	return p;
}

vector<int>ans;
void zigzag(node* root)
{
	
	queue<node*>Q;
	Q.push(root);
	int level = 1;
	while (int level_count = Q.size())
	{
		level++;
		vector<int>temp;
		while (level_count--)
		{
			node* p = Q.front();
			Q.pop();
			if (p->left)Q.push(p->left);
			if (p->right)Q.push(p->right);
			temp.push_back(p->data);
		}
		//奇数从右往左，偶数从左往右
		if (level % 2 == 1)
			for (int i = temp.size() - 1; i >= 0; i--)
				ans.push_back(temp[i]);
		else
			for (int i =  0;i<temp.size(); i--)
				ans.push_back(temp[i]);
	
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> in[i];
	for (int i = 0; i < N; i++)
		cin >> post[i];
	node* root = makenode(0, 0, N);
	zigzag(root);
	for (int i = 0; i < ans.size(); i++)
	{
		if (i)cout << " ";
		cout << ans[i];
	}
	return 0;
}