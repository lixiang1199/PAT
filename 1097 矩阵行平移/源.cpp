#include<iostream>
using namespace std;

int main() {
	int n;//n行
	int k;//平移k个位置
	int x;//用整数x替换
	cin>>n>>k>>x;
	int matrix[101][101];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	//已经将矩阵储存完毕
	bool flag=1;
	const int m = 1;
	int move ;
	for (int i = 0; i <n; i += 2) {//行(找奇数行)
		if (flag) {
			move = m;
		}
		else{
			move = k;
		}
		for (int j = n - 1; j >= 0; j--) {
			if (j < move) { matrix[i][j] = x; continue; }
			matrix[i][j] = matrix[i][j - move];
			
		}
		flag = !flag;
	}
	//查看矩阵以验证

	/*cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}*/
	//先按ctrl+k，再按 ctrl+c 即可
	
	//计算列和
	int sum;
	
	for (int j = 0; j < n; j++) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum += matrix[i][j];
		}
		if (j<n-1)
			cout << sum << " ";
		else
			cout << sum;
	}


	return 0;
}