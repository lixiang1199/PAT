#include<iostream>
using namespace std;
int b[10000];
int main() {
	int N;
	cin >> N;
	int a[100000];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	bool flag = 0;

	for (int i = 0; i < N; i++) {
		if (b[a[i]] == 1) {//°´ÕÕË³ÐòÒÀ´Î²éÕÒ(Í¼)

			flag = 1;
			cout << a[i];
			break;
		}
	}
	if (flag == 0) { cout << "None"; }





}