#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Ѱ��û�к��ӵ��ˣ�Ҷ�ӽڵ㣩

//������ȱ���

//ʹ��vector��Ϊ���Ĵ���ṹ

//vector[i].size()==0�����ýڵ�ĺ�����Ϊ0
vector<int> v[100];
int book[100];
int maxDepth = -1;
void dfs(int index, int depth) {
	//û���ӽڵ���˵����Ҷ�ӽڵ�
	if (v[index].size() == 0) {
		book[depth]++;//ͳ��Ҷ�ӽڵ�

		maxDepth = max(maxDepth, depth);
		return;
	}
	for (int i = 0; i < v[index].size(); i++) {
		dfs(v[index].at(i), depth + 1);//�ݹ����
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
		dfs(1, 0);//�ӵ�һ���ڵ㿪ʼ����0��

		cout << book[0];
		for (int i = 1; i <= maxDepth; i++) {
			cout << " " << book[i];
		}

	}
	return 0;
}