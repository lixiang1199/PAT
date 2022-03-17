#include<iostream>
//#include<cstudio.h>
#include<map>
using namespace std;
int pre[33], in[33], post[33];//,level[33];
map<int, int> level;
//
//struct node {
//	int data;
//	node* lchild, * rchild;
//}TreeNode;
//
//node build(int post_left,int post_right,int in_left,int in_right)
//{
//	if(post_left>post_right || in_left)
//};
//                                        index为顺序存储下的下标，左孩子2*index+1，右孩子2*index+2(从 0 开始的情况)
void prei(int post_r, int in_l, int in_r, int index)
{
	if (in_l > in_r)return;//递归边界
	int i = in_l;//找出当前树的根节点在中序序列中的下标
	while (i < in_r && in[i] != post[post_r])i++;
		//前提条件 +    寻找
		//             寻找中序遍历等与后序遍历的最后一个结点即 根
	    //i不断向后移动，直到找到根结点在中序遍历中的位置
	level[index] = post[post_r];//根 即当前结点
	prei(post_r - 1 - in_r + i, in_l, i - 1, 2 * index + 1);//左孩子
	prei(post_r - 1, i + 1, in_r, 2 * index + 2);
	
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>post[i];//左右根
	}
	for (int i = 0; i < n; i++)
	{
		cin >> in[i];//左根右
	}
	//int root = post[n - 1];//根
	prei(n - 1, 0, n - 1, 0);
	/*for (int i = 0; i < n; i++)
	{
		cout << level[i] << " ";
	}*/
	auto it = level.begin();
	printf("%d", it->second);
	while (++it != level.end())printf(" %d", it->second);
	return 0;
}