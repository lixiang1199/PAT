#include<iostream>
using namespace std;

int main() {
	int N;//�����������100λ���ֺ���޷���������
	cin >> N;
	int sum = 0,count=0;
	int r[100];
	int d= 0;
	while (N) {
		sum += N % 10;
		N /= 10;
	}
	
	string a[10] = { "zero","one","two","three","four","five","six","seven","eight","nine"};
	
	while (sum) {
		r[d++] = sum % 10;//�����������
		sum /= 10;
		count++;
	}
	for (int i = count - 1; i >0; i--) {
		cout << a[r[i]] << " ";
	}
	cout << a[r[0]];
	return 0;
}