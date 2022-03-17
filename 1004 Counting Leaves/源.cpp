#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//寻找没有孩子的人（叶子节点）

//深度优先遍历

//使用vector作为树的储存结构

//vector[i].size()==0表明该节点的孩子树为0
vector<int> v[100];
int book[100];
int maxDepth = -1;
void dfs(int index, int depth) {
	//没有子节点则说明是叶子节点
	if (v[index].size() == 0) {
		book[depth]++;//统计叶子节点

		maxDepth = max(maxDepth, depth);
		return;
	}
	for (int i = 0; i < v[index].size(); i++) {
		dfs(v[index].at(i), depth + 1);//递归调用
	}
}
int main() {

	int N, M;
	int node, K;
	while (cin >> N >> M)
	{
		for (int i = 0; i < M; i++) {
			cin >> node >> K;
			for (int j = 0; j < K; j++) {
				int temp;
				cin >> temp;
				v[node].push_back(temp);
			}
		}
		dfs(1, 0);//从第一个节点开始，第0层

		cout << book[0];
		for (int i = 1; i <= maxDepth; i++) {
			cout << " " << book[i];
		}

	}
	return 0;
}