#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a, d;//12345   2
	cin >> a >> d;
	int temp = a; int t1 = a; int t2 = 1;//12345
	int c = 10;
	int n;
	int cnt = 0;
	while (t1) { cnt++; t1 /= 10; }
	for (int i = 1; i < d; i++) {
		c *= 10;//100
	}
	for (int i = 0; i < cnt; i++) {
		t2 *= 10;//100
	}
	temp %= c;//45
	int c1 = a / c;//123
	temp *= (t2 / c);//45000
	n = temp + c1;//45123
	double x = double(n) / double(a);//45123/12345
	cout << setiosflags(ios::fixed) << setprecision(2) << x;
	return 0;
}