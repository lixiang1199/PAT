#include<iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int fp = 0, fa = 0, ft = 0,now=0,count=0;
	int u = a.length();
	while (now<u-1) {
		for (int i = fp; i <u; i++) {
			now = i;
			if (a[i] == 'P') {
				fp = i;
				break;
			}

		}
		for (int i = fp + 1; i <u; i++) {

			now = i;
			if (a[i] == 'A') {
				fa = i;
				break;
			}
		}
		for (int i = fa + 1; i <u; i++) {
			now = i;
			if (a[i] == 'T') {
				ft = i;
				count++;
				fp++;
				break;
			}
		}
		}
	cout << count;
	return 0;

}