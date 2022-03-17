#include<iostream>
using namespace std;

struct List {
	int add;
	int data;
	int next;

};

int main() {
	int head;
	cin >> head;
	int K;
	cin >> K;
	int N;
	cin >> N;
	List L[10000];

	for (int i = 0; i < K; i++) {
		cin >> L[i].add >> L[i].data >> L[i].next;
	}
	for (int i = head; i != -1; i = L[i].next) {
		cout << L[i].add << " " << L[i].data << " " << L[i].next<<endl;


	}



	return 0;
}