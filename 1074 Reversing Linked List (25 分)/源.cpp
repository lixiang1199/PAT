#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int list[100010];//新表
int node[100010][2];
int Address, Data, Next;
//Address is the position of the node, Data is an integer, and Next is the position of the next node.
int A; //contains the address of the first node
int N;//which is the total number of nodes
int K;//the length of the sublist to be reversed
int main() {

cin >> A >> N >> K;
//输入第一个节点的地址，之后的节点个数，长度

for (int i = 0; i < N; i++) {
	cin >> Address >> Data >> Next;
	//Data放进数组的一区，Next二区
	node[Address][0] = Data;
	node[Address][1] = Next;
	//每个node分为两部分，数据域和指针域（装有后继节点的位置）
}
int t = A;//存放第一个节点的地址
int m = 0;//新表下标
while (t != -1) {//直到遇到-1
	list[m] = t;//第一次赋值首地址
	m++;
	t = node[t][1];//后续节点的地址赋值给t（next给t）
}
//如果-1太靠前怎么办？ 后继节点为空，说明链表已经结束,不会靠前
int i = 0;
while (i + K <= m) {
	reverse(list + i, list + i + K);
	i += K;
}
for (i = 0; i < m - 1; i++) {//第m个是-1，NULL，单独打印
	cout << setw(5) << setfill('0') << list[i] << " " << node[list[i]][0] << " " << setw(5) << setfill('0') << list[i + 1] << endl;
}
cout << setw(5) << setfill('0') << list[m - 1] << " " << node[list[m - 1]][0] << " "<<t;
}