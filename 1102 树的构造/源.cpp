#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data, lchild, rchild;
};

int N, root;
node n[100];
bool inordertraverse_started = 0;
void inordertraverse(int cur)
{
	if (n[cur].rchild >= 0)inordertraverse(n[cur].rchild);
	if (inordertraverse_started)cout << " ";
	else inordertraverse_started = 1;
	cout << n[cur].data;
	if (n[cur].lchild >= 0)inordertraverse(n[cur].lchild);
	return;
}

void levelordertraverse() {
	queue<int>Q;
	Q.push(root);
	while (Q.size())
	{
		int a = Q.front();
		Q.pop();
		if (a != root)cout << " ";
		cout << n[a].data;
		if (n[a].rchild >= 0)Q.push(n[a].rchild);
		if (n[a].lchild >= 0)Q.push(n[a].lchild);
	}
	cout << endl;
	return;
}


int main()
{
	bool appeared[10] = { 0 };
	int i,temp;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		n[i].data = i;
		string s;
		cin >> s;
		if (s == "-")
		{
			n[i].lchild = -1;
		}
		else 
		{
			temp = s[0] - '0';
			appeared[temp] = 1;
			n[i].lchild =temp ;
		}
		s = "";
		cin >> s;
		if (s == "-")
		{
			n[i].rchild = -1;
		}
		else
		{
			temp = s[0] - '0';
			appeared[temp] = 1;
			n[i].rchild = temp;
		}
	}
	for (root = 0; appeared[root]; root++)
	{//»ñÈ¡¸ù
		levelordertraverse();

		inordertraverse(root);
	}
	return 0;
}