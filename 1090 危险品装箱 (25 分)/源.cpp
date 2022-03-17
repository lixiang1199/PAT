#include<iostream>
using namespace std;

int main() {

	int N;//成对的不相容物品的对数
	int M;//是集装箱货品清单的单数

	cin >> N >> M;

	int K;//物品件数

	cin >> K;

	int incompatible[100][2];//pair

	for (int i = 0; i < N; i++) {
		for (int single = 0; single <= 1; single++) {
			cin >> incompatible[i][single];
		}
	}//将所有不相容物品存起来
	int t,obj[4];
	for (int i = 0; i < M; i++) {
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> obj[j];
		}
		for (int k = 0; k < M; k++) {
			for (int p = 0; p < N; p++) {
				if (obj[k]==)
			}
		}
		

	}

	



}