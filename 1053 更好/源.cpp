#include<iostream>
#include<iomanip>
using namespace std;
int main() {

	int n, k; 
    double e, d,temp,maybe = 0, must = 0,pmay,pmust;
	cin >> n >> e >> d;
	for (int i = 0; i < n; i++) {
		cin >> k;
		int sum = 0;
		for (int j = 0; j < k; j++) {
			cin >> temp;
			if (temp < e)sum++;
		}
		if (sum > (k / 2)) {//超过一半的日子用电量低于某给定的阈值 e
			if (k > d) {//若观察期超过某给定阈值 D 天，且满足上一个条件
				must++;
			}
			else
				maybe++;
		}
	}
	pmay = maybe / double(n) * 100;
	pmust = must / double(n) * 100;

	cout << setiosflags(ios::fixed) << setprecision(1) << pmay;
	cout << "% ";
	cout << setiosflags(ios::fixed) << setprecision(1) << pmust;
	cout << "%";



}