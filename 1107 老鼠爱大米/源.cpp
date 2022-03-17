#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n>> m;
	int temp;
	int Max=-1;int maxn = -1;
	for (int i = 0; i < n; i++) {
		maxn = -1;
		for (int j = 0; j < m; j++) {
			cin >> temp;
			if (temp > maxn) { 
				maxn = temp;
			if (maxn > Max)
			{ Max = maxn; }
			
			}
		}
		cout << maxn;
		if (i < n - 1)cout << " ";
	}
	cout << endl << Max;



	return 0;
}