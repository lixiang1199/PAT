#include<iostream>
using namespace std;

int main() {
	int n;//n��
	int k;//ƽ��k��λ��
	int x;//������x�滻
	cin>>n>>k>>x;
	int matrix[101][101];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	//�Ѿ������󴢴����
	bool flag=1;
	const int m = 1;
	int move ;
	for (int i = 0; i <n; i += 2) {//��(��������)
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
	//�鿴��������֤

	/*cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j]<<" ";
		}
		cout << endl;
	}*/
	//�Ȱ�ctrl+k���ٰ� ctrl+c ����
	
	//�����к�
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