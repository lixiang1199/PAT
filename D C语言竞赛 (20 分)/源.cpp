#include<iostream>
using namespace std;

int prime(int n) {

	if (n < 2) return 0;
	
		for (int i = 2; i < n / 2; i++) {
			if (n % i == 0)return 0;
		}

	
	return 1;




}

struct student {
	int a;
	int id;
	int flag = 1;
};
int main() {
	student s[10000];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s[i].id;
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int num, j;
		cin >> num;
		for (j = 0; j < N; j++) {
			if (num == s[j].id) {
				if (j == 1) {
					if (s[j].flag) {
						cout << num << ": Mystery Award" << endl;
						s[j].flag = 0;
						break;
					}
					else
						cout << num << ": Checked" << endl;
				}
			}
			else if (prime(j))
			{
				if (s[j].flag) {
					cout << num << ": Minion" << endl;
					s[j].flag = 0;

				}
				else
					cout << num << ": Checked" << endl;

			}

			else {
				if (s[j].flag) {
					cout << num << ": Chocolate" << endl;
					s[j].flag = 0;
				}
				else
					cout << num << ": Checked" << endl;

			}
			break;

		}
		if (j > N) {
			cout << num << ": Are you kidding?" << endl;
		}
	}






}