////#include<iostream>
////#include<iomanip>
////using namespace std;
////struct node {
////	int add, key, next;
////};
////void reverse(node s[], int a, int b)
////{
////	int len = b - a;
////	int  i, j;
////	node t;
////	for (i = 0, j = len - 1; i < j; i++, j--)
////	{
////		t = s[i];
////		s[i] = s[j];
////		s[j] = t;
////	}
////}
////
////
////node a[10000];
////int main()
////{
////	int  s,k,n;
////	cin >> s >> n >> k;
////	int d, b, c;
////	int p;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> d >> b >> c;
////		a[i] = { d,b,c };
////		if (k == b)p = b;
////	}
////	reverse(a, 0, p);
////	cout << endl << endl;
////	for (int i = 0; i < n; i++)
////	{
////		cout <<setw(5)<<setfill('0') << a[i].add << " " << a[i].key << " " << a[i].next << endl;
////	}
////	/*int a[10] = {1,2,3,4,5,6,7,8,9,10};
////	reverse(a,0,8);
////	for(int i=0;i<=9;i++)
////	cout << a[i]<<" ";*/
////
////
////	return 0;
////
////}#include<iostream>
//#include<iomanip>
//#include<algorithm>
//using namespace std;
//int list[100010];//�±�
//int node[100000][2];
//int Address, Data, Next;
////Address is the position of the node, Data is an integer, and Next is the position of the next node.
//int A; //contains the address of the first node
//int N;//which is the total number of nodes
//int K;//the length of the sublist to be reversed
//int main() {
//
//	cin >> A >> N >> K;
//
//	for (int i = 0; i < N; i++) {
//		cin >> Address >> Data >> Next;
//		//Data�Ž������һ����Next����
//		node[Address][0] = Data;
//		node[Address][1] = Next;
//
//	}
//	int t = A;//��ŵ�һ���ڵ�ĵ�ַ
//	int m = 0;
//	while (t != -1) {//ֱ������-1
//		list[m] = t;
//		m++;
//		t = node[t][1];//�����ڵ�ĵ�ַ��ֵ��t
//	}
//	//���-1̫��ǰ��ô�죿
//	int i = 0;
//	while (i + K <= m) {
//		reverse(list + i, list + i + K);
//		i += K;
//	}
//	for (i = 0; i < m - 1; i++) {//��m����-1��NULL�ʲ�ȡ
//		cout << setw(5) << setfill('0') << list[i] << " " << node[list[i]][0] << " " << setw(5) << setfill('0') << list[i + 1] << endl;
//	}
//	cout << setwm-1(5) << setfill('0') << list[m - 1] << " " << node[list[m - 1]][0] << " -1";
//}