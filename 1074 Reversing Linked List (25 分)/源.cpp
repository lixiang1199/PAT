#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int list[100010];//�±�
int node[100010][2];
int Address, Data, Next;
//Address is the position of the node, Data is an integer, and Next is the position of the next node.
int A; //contains the address of the first node
int N;//which is the total number of nodes
int K;//the length of the sublist to be reversed
int main() {

cin >> A >> N >> K;
//�����һ���ڵ�ĵ�ַ��֮��Ľڵ����������

for (int i = 0; i < N; i++) {
	cin >> Address >> Data >> Next;
	//Data�Ž������һ����Next����
	node[Address][0] = Data;
	node[Address][1] = Next;
	//ÿ��node��Ϊ�����֣��������ָ����װ�к�̽ڵ��λ�ã�
}
int t = A;//��ŵ�һ���ڵ�ĵ�ַ
int m = 0;//�±��±�
while (t != -1) {//ֱ������-1
	list[m] = t;//��һ�θ�ֵ�׵�ַ
	m++;
	t = node[t][1];//�����ڵ�ĵ�ַ��ֵ��t��next��t��
}
//���-1̫��ǰ��ô�죿 ��̽ڵ�Ϊ�գ�˵�������Ѿ�����,���῿ǰ
int i = 0;
while (i + K <= m) {
	reverse(list + i, list + i + K);
	i += K;
}
for (i = 0; i < m - 1; i++) {//��m����-1��NULL��������ӡ
	cout << setw(5) << setfill('0') << list[i] << " " << node[list[i]][0] << " " << setw(5) << setfill('0') << list[i + 1] << endl;
}
cout << setw(5) << setfill('0') << list[m - 1] << " " << node[list[m - 1]][0] << " "<<t;
}