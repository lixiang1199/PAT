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
		if (sum > (k / 2)) {//����һ��������õ�������ĳ��������ֵ e
			if (k > d) {//���۲��ڳ���ĳ������ֵ D �죬��������һ������
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