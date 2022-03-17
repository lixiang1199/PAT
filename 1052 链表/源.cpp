#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
struct node {
	int key, next;
};
node n[1000000];
bool camp(int x, int y)
{
	return n[x].key < n[y].key;
}
//值排序,对值进行从小到大的排序，其他不变

vector<int>v;
int main()
{
	int N, head;
	cin >> N >> head;
	int i;
	int add;
	while (N--)//N以后不用就用while循环
	{
		cin >> add;
		cin >> n[add].key >> n[add].next;
	}//录入数据
	for (i = head; i >= 0; i=n[i].next) {
		v.push_back(i);//将地址压入栈
	}
	sort(v.begin(), v.end(),camp);
	cout << v.size();
	for (i = 0; i < v.size(); i++)
	{
		printf(" %05d\n%05d %d", v[i], v[i], n[v[i]].key);
	}
	cout << ' ' << -1;
	return 0;
}