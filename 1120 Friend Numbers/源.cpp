#include<iostream>
using namespace std;
int s[1000], c;
int main() {
	int n;
	cin >> n;
	int a[10000];
	int sum;
	for (int i = 0; i < n; i++) {
		sum = 0;
		cin >> a[i];
		while (a[i]) {
			sum += a[i] % 10;
			a[i] /= 10;
		}

		s[sum]++;

	}
	for (int i = 0; i < 100; i++) {
		if (s[i] != 0) {
			c++;
		}
	}
	cout << c << endl;
	for (int i = 0; i < 100; i++) {
		if (s[i] != 0) {
			cout << i;
			c--;
			if (c != 0) { cout << " "; }
		}


	}

}