#include<iostream>
using namespace std;
int hashs[1000] = {2,0,1,9};
int main() {
	int n;
	cin >> n;
	
	for (int i = 4; i < n; i++) {
		hashs[i] = 0;
		for (int j = i-1; j >i- 5; j--) {//注意常量与变量
			hashs[i] += hashs[j];
		}
		hashs[i] %= 10;
	}
	for (int i = 0; i < n; i++)
		cout << hashs[i];
	return 0;
}