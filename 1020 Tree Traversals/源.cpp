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
//                                        indexΪ˳��洢�µ��±꣬����2*index+1���Һ���2*index+2(�� 0 ��ʼ�����)
void prei(int post_r, int in_l, int in_r, int index)
{
	if (in_l > in_r)return;//�ݹ�߽�
	int i = in_l;//�ҳ���ǰ���ĸ��ڵ������������е��±�
	while (i < in_r && in[i] != post[post_r])i++;
		//ǰ������ +    Ѱ��
		//             Ѱ������������������������һ����㼴 ��
	    //i��������ƶ���ֱ���ҵ����������������е�λ��
	level[index] = post[post_r];//�� ����ǰ���
	prei(post_r - 1 - in_r + i, in_l, i - 1, 2 * index + 1);//����
	prei(post_r - 1, i + 1, in_r, 2 * index + 2);
	
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>post[i];//���Ҹ�
	}
	for (int i = 0; i < n; i++)
	{
		cin >> in[i];//�����
	}
	//int root = post[n - 1];//��
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