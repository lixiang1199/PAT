#include<iostream>
using namespace std; 

struct link {
	int key;
	int add;
	int next;

};


int main() {
	int N;
	cin >> N;
	int head;
	int temp;
	cin >> head;
	link L[10000];
	for (int i = 0; i < N; i++) {
		cin >> L[i].add >> L[i].key >> L[i].next;
		if (head == L[i].add) {
			temp = i;
		}
	}
	
		cout << L[temp].add<<" "<<L[temp].key<<" " << L[temp].next;
	
		for(int i = L[temp].next;i!=-1; i=L[i].next) {
			cout << L[i].add << " " << L[i].key << " " << L[i].next;


		}


	return 0;
}